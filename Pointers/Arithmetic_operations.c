/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.

--------------------------------------------------------------------------------
FILE NAME  :Arithmetic_operation.c

DESCRIPTION:This file contains functions to do all arithmetic operations.
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
float sum(float Num1, float Num2);
float diff(float Num1, float Num2);
float mul(float Num1, float Num2);
float div(float Num1, float Num2);
/*******************************************************************************
** -- Functions --
*******************************************************************************/

/* -----------------------------------------------------------------------------

FUNCTION NAME:sum

DESCRIPTION: This function is to add two numbers

PARAMETER DESCRIPTION: float num1, float num2

RETURN VALUE: float sum

----------------------------------------------------------------------------- */
float sum(float num1, float num2)
{
	float sum = num1 + num2;
	printf("%f + %f",num1,num2);
	return sum;
}
/* -----------------------------------------------------------------------------

FUNCTION NAME:Init

DESCRIPTION: This function is to do diffrence between two numbers

PARAMETER DESCRIPTION: float num1,float num2

RETURN VALUE: float diff

----------------------------------------------------------------------------- */
float diff(float num1, float num2)
{
	float diff = num1 - num2;
	printf("%f - %f",num1,num2);
	return diff;
}
/* -----------------------------------------------------------------------------

FUNCTION NAME:mul

DESCRIPTION: This function is to find multiplication of two numbers

PARAMETER DESCRIPTION: float num1,float num2

RETURN VALUE: float mul

----------------------------------------------------------------------------- */
float mul(float num1, float num2)
{
	float mul = num1 * num2;
	printf("%f + %f",num1,num2);
	return mul;
}
/* -----------------------------------------------------------------------------

FUNCTION NAME:div

DESCRIPTION: This function is to perform division operation

PARAMETER DESCRIPTION: float num1,float num2

RETURN VALUE: float div

----------------------------------------------------------------------------- */
float div(float num1, float num2)
{ 
	if(num2 > 0)
	{
	float div = num1 / num2;
	printf("%f / %f",num1,num2);
	return div;
	}
	else
		printf("Error num2 should be greater than 0\n");
	return 0;
}
/*******************************************************************************
 **--main()Function
 *******************************************************************************/
int main(void)
{
	float (*ptr[4])(float,float)= {sum, diff, mul, div};//function pointer to do 
	                                                    //all airthmetic operation
	int ch;
	float Num1,Num2;
	/*read choice to select the operation */
		printf("Enter the Choice:\nfor  Sum :0\nfor diff: 1\nfor  mul: 2\nfor  div: 3\t");
		scanf("%d",&ch);
		/*read two inputs*/
		printf("Enter the Two numbers :");
		scanf("%f %f",&Num1,&Num2);
		printf("= %f \n",ptr[ch] (Num1,Num2));//perform operation based on choice
		return 0;

}
