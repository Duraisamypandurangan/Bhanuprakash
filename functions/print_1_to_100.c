/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :print_1_to_100.c

DESCRIPTION:This file contains functions Demo.
*******************************************************************************/

/*******************************************************************************
** -- File Inclusion --
*******************************************************************************/

#include<stdio.h>

/*******************************************************************************
** -- Local Data Declarations --
*******************************************************************************/

/*******************************************************************************
** -- Global Data Declarations --
*******************************************************************************/
 
/*******************************************************************************
** -- Macros --
*******************************************************************************/

/*******************************************************************************
** -- Global Variables Initializations --
*******************************************************************************/

/*******************************************************************************
** -- Function Prototypes --
*******************************************************************************/
void  print_num(int num);

/*******************************************************************************
** -- Functions --
*******************************************************************************/

/* -----------------------------------------------------------------------------

FUNCTION NAME:print_num

DESCRIPTION: This function is to print from 1 to 100 numbers

PARAMETER DESCRIPTION: int num

RETURN VALUE: void

----------------------------------------------------------------------------- */
void print_num(int num)
{
    if(num > 1)//base case
        print_num(num-1);//recursive case

    printf("%3d  ",num);//print number in unwinding phase
    if(num%10==0)//To get a new line after printing the 10 numbers.
        printf("\n\n");
    
}
/* -----------------------------------------------------------------------------*/
/********************************************************************************
 **--main()Function
 ********************************************************************************/
int main(void)
{
    int num=100;//declare and initialize num with 100
    printf("\n");
    print_num(num);//fuction all to print number from 1 to 100
    printf("\n");
    return 0;
}
