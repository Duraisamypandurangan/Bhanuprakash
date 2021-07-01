/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :fpointer_2Num_Addition
DESCRIPTION:This file contains Function pointer to add two numbers.
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
int Add_2Num(int Num1, int Num2);
/*******************************************************************************
** -- Functions --
*******************************************************************************/

/* -----------------------------------------------------------------------------

FUNCTION NAME:Add_2Num

DESCRIPTION: To add two numbers

PARAMETER DESCRIPTION: int Num1,int Num2

RETURN VALUE: int Sum

----------------------------------------------------------------------------- */
int Add_2Num(int Num1, int Num2)//function to add two numbers
{
	int Sum;
	return Sum = Num1 + Num2;
}

/* ---------------------------------------------------------------------------*/
/******************************************************************************
 **-- main()Function--
 ******************************************************************************/
int main(void)
{
	int Num1,Num2,Sum;
	int (*ptr)(int, int);//Declaration of function pointer.
	printf("Enter the two number to Add: ");
	scanf("%d %d",&Num1,&Num2);
	ptr=Add_2Num;// Assigning adress of function to pointer.
	Sum=ptr(Num1,Num2);//function calling using function pointer.
	printf("The Sum of %d + %d is %d\n",Num1,Num2,Sum);//print final out put
	return 0;
}
