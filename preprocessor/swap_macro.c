/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :swap_macro.c

DESCRIPTION:This file contains function macro two swap numbers.
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
#define SWAP(num1,num2) int temp=num1;num1=num2;num2=temp

/*******************************************************************************
** -- Global Variables Initializations --
*******************************************************************************/

/*******************************************************************************
** -- Function Prototypes --
*******************************************************************************/

/*******************************************************************************
** -- Functions --
*******************************************************************************/

/*******************************************************************************
**--main()Function--
********************************************************************************/
int main(void)
{
	int num1=10,num2=20;
	
	printf("before swaping num1=%d num2=%d\n",num1,num2);

	SWAP(num1,num2);//macro substitution to swap number
	
	printf("after  swaping num1=%d num2=%d\n",num1,num2);
	
	return 0;
}
