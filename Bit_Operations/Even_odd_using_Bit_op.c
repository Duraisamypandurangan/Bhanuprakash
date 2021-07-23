/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :Even_odd_using_Bit_op.c

DESCRIPTION:This file contains to check given integer is Even or Odd 
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

/*******************************************************************************
** -- Functions --
*******************************************************************************/

/* -----------------------------------------------------------------------------

FUNCTION NAME:main

DESCRIPTION: function to find even or odd usng Bit operators 

PARAMETER DESCRIPTION: void

RETURN VALUE: return 0

----------------------------------------------------------------------------- */


/*******************************************************************************
**--main()Function--
********************************************************************************/
int main(void)
{
	//Declare and Read Input for Variable	
	int num,mask;
	printf("Enter the number :");
	scanf("%d",&num);
	mask=1;//create mask
        if(num & mask)//To Check LSB is high or low
    	printf("The %d is Odd Number\n",num);
	else
		printf("The %d is Even Number\n",num);
	return 0;
}
	
