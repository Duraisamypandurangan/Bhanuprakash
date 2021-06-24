/*******************************************************************************
* Filename              :   debug_mode.c
* Author                :   ljj
* Origin Date           :   2020.08.25
* Version               :   1.0.0
* Compiler              :   IAR V8.32.1
* Target                :   HC32L110XX
* Notes                 :   This module is debug_mode C file
*******************************************************************************/
/*************** SOURCE REVISION LOG *****************************************
*
*    Date       	Version    	Author           Description
*  2020.08.25	  	1.0.0     	ljj        	 Initial Release.
*
*******************************************************************************/
/** @file debug_mode.c
 *  @brief This module is debug_mode C file
 */
/******************************************************************************
* Includes
*******************************************************************************/
#include "bsp.h"
#include "type_def.h"
#include "user_cfg.h"
#include "au2001_api.h"

#if DEBUG_MODE_SUPPORT
/******************************************************************************
* Module Macros
*******************************************************************************/

/******************************************************************************
* Module Typedefs
*******************************************************************************/

/******************************************************************************
* Module Variable Definitions
*******************************************************************************/
static S16 cd1_max = -0x8000;
static S16 cd1_min = 0x7FFF;
static S16 cd2_max = -0x8000;
static S16 cd2_min = 0x7FFF;

extern int next_cmd;

unsigned char in_debug_mode;

/******************************************************************************
* Function Prototypes
*******************************************************************************/

/******************************************************************************
* Function Definitions
*******************************************************************************/
static boolean_t debug_mode_check(void)
{
    bsp_gpio_preinit();
    delay1ms(1);
    
    if(Gpio_GetIO(3,5) == TRUE && Gpio_GetIO(3,6) == FALSE)
    {
        return TRUE;
    }
    return FALSE;
}

static void debug_mode_init(void)
{
    bsp_gpio_init();
    bsp_uart1_init();
    bsp_spi_init();
    au2001_init();
}

static void debug_mode_loop(void)
{
    S8 s8Ret;
    
    // Delay for sensor sampling
    delay1ms(10);
    
    // Disable sensor
    AU2001_SENS_DISABLE;
    
    // au20xx sample
    s8Ret = au20xx_sample();
    
    // Enable sensor, trigger one sample
    AU2001_SENS_ENABLE;

    // Calculate the CD range
    if(s8Ret == NO_Err)
    {
        if(au20xx_get_cd1() > cd1_max) cd1_max = au20xx_get_cd1();
        if(au20xx_get_cd1() < cd1_min) cd1_min = au20xx_get_cd1();
        if(au20xx_get_cd2() > cd2_max) cd2_max = au20xx_get_cd2();
        if(au20xx_get_cd2() < cd2_min) cd2_min = au20xx_get_cd2(); 
    }

    //  Execute the debug command
    switch(next_cmd)
    {
    case 0:
        {
            U32 resp = 0;
            bsp_uart_send(UARTCH1,(U8 *)&resp, 4, 0xF0);
            next_cmd = 0x00FF;
            break;
        }
    case 1:
        {
            U32 resp = 0;
            resp = FW_VERSION;
            bsp_uart_send(UARTCH1,(U8 *)&resp, 4, 0xF1);
            next_cmd = 0x00FF;
            break;
        }
    case 2:
        {
            U32 resp = 0;
            resp = au20xx_get_cwcount() - au20xx_get_ccwcount();
            bsp_uart_send(UARTCH1,(U8 *)&resp, 4, 0xF2);
            next_cmd = 0x00FF;
            break;
        }
    case 3:
        {
            U32 resp = 0;
            resp = au20xx_get_cwcount();
            bsp_uart_send(UARTCH1,(U8 *)&resp, 4, 0xF3);
            next_cmd = 0x00FF;
            break;
        }
    case 4:
        {
            U32 resp = 0;
            resp = au20xx_get_ccwcount();
            bsp_uart_send(UARTCH1,(U8 *)&resp, 4, 0xF4);
            next_cmd = 0x00FF;
            break;
        }
    case 5:
        {
            U32 resp = 0;
            if(cd1_max - cd1_min > 25) resp++;
            if(cd2_max - cd2_min > 25) resp += 2;
            bsp_uart_send(UARTCH1,(U8 *)&resp, 4, 0xF5);
            next_cmd = 0x00FF;
            break;
        }
    default:
        if(next_cmd != 0x00FF)
        {
            bsp_uart_send(UARTCH1,(U8 *)&next_cmd, 4, 0xF6);
        }
        break;
    }
}

/******************************************************************************
* Function : debug_mode()
*//**
* \b Description:
*
* This function is do debug mode
*
* @param[in] 	None
* @return 	None
*
*******************************************************************************/
void debug_mode(void)
{
    if(debug_mode_check() == FALSE)
    {
        in_debug_mode = 0;
        return;
    }
    
    in_debug_mode = 1;
    debug_mode_init();
    while(1)
    {
        debug_mode_loop();
    }
}  

/*************** END OF FUNCTIONS ***************************************************************************/

#endif