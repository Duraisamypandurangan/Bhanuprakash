/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :call_back_function.c

DESCRIPTION:This file contains functions to perform some calci operations
*******************************************************************************/

/*******************************************************************************
** -- File Inclusion --
*******************************************************************************/

#include<stdio.h>
#include<math.h>//use -lm FLAG DURING COMPILE ("gcc -lm call_back_function.c")
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
float calc(int num, float(*op)(int));
float square(int num);
float cube(int num);
float squareroot(int num);
/*******************************************************************************
** -- Functions --
*******************************************************************************/

/* -----------------------------------------------------------------------------

FUNCTION NAME:calc

DESCRIPTION: to to calculater operation based on second parameter

PARAMETER DESCRIPTION: int num,float (*op)(int)

RETURN VALUE:float 

----------------------------------------------------------------------------- */
float calc(int num, float(*op)(int))
{
   return op(num);

}

/* -----------------------------------------------------------------------------

FUNCTION NAME:square

DESCRIPTION: This function to find square of a number

PARAMETER DESCRIPTION: int num

RETURN VALUE: float num*num

----------------------------------------------------------------------------- */
float square(int num)
{
	return num*num;
}
/* -----------------------------------------------------------------------------

FUNCTION NAME:cube

DESCRIPTION: This function to cube of number

PARAMETER DESCRIPTION: int num

RETURN VALUE: float num*num*num

----------------------------------------------------------------------------- */
float cube(int num)
{
	return num*num*num;
}
/* -----------------------------------------------------------------------------

FUNCTION NAME:squareroot

DESCRIPTION: This function is to find squareroot of a number

PARAMETER DESCRIPTION: int num

RETURN VALUE: float sqrt(num)

(----------------------------------------------------------------------------- */
float squareroot(int num)
{
	return (sqrt(num));
}

/*******************************************************************************
 **--main() function--
 *******************************************************************************/
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);//read input
	printf("    square :\t %.2f\n",calc(num, square));//print square of number
	printf("      cube :\t %.2f\n",calc(num, cube));//print cube of number
	printf("squareroot :\t %.2f\n",calc(num, squareroot));//print sqyareroot of number
	return 0;
}


