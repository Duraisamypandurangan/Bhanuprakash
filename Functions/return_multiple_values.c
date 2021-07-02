/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :return_mtpl_vlu.c

DESCRIPTION:This file contains function to return multiple values
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
void Arithmetic(int Num1, int Num2,int *sum, int *diff, int *mul, int *divide);
/*******************************************************************************
** -- Functions --
*******************************************************************************/

/* -----------------------------------------------------------------------------

FUNCTION NAME:Arithmetic

DESCRIPTION: This function to do basic arithmetic operations.

PARAMETER DESCRIPTION: int Num1,int Num2,int *sum, int *diff, int *mul,int * div

RETURN VALUE: void

----------------------------------------------------------------------------- */
void Arithmetic(int Num1, int Num2,int *sum, int *diff, int *mul, int *div)
{
   *sum=Num1 + Num2;
  *diff=Num1 - Num2;
   *mul=Num1 * Num2;
   if(Num2 > 0)
   	   *div=Num1 / Num2;
   else
   	   printf("Num2 should be Non-zero\n");
}

/*******************************************************************************
 **--main()Function--
 ******************************************************************************/
int main(void)
{
	int Num1,Num2,Sum,Diff,Mul,Div;
	printf("Enter the values for Num1 and Num2 :");
	scanf("%d %d",&Num1,&Num2);//To read Num1 and Num2 values
    Arithmetic(Num1,Num2,&Sum,&Diff,&Mul,&Div);//function call to do arithmetic operation
    //to print output
  	printf("           The sum is %d + %d = %3d\n",Num1,Num2,Sum);
    printf("    The difference is %d - %d = %3d\n",Num1,Num2,Diff);
    printf("The multiplication is %d * %d = %3d\n",Num1,Num2,Mul);
    printf("       The divison is %d / %d = %3d\n",Num1,Num2,Div);
    return 0;
}
