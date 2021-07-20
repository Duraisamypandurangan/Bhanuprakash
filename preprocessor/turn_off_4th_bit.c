/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :turn_off_4th_bit.c

DESCRIPTION:This file contains macro to turn off 4th bit of given integer
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
#define clear4thbit(n) int mask=~(1<<3); n=n&mask;
/*******************************************************************************
** -- Global Variables Initializations --
*******************************************************************************/

/*******************************************************************************
** -- Function Prototypes --
*******************************************************************************/
void displaybits(int num);
/*******************************************************************************
** -- Functions --
*******************************************************************************/

/* -----------------------------------------------------------------------------

FUNCTION NAME:displaybits

DESCRIPTION: This function to convert decimal to binary

PARAMETER DESCRIPTION: int num

RETURN VALUE: void

----------------------------------------------------------------------------- */
void displaybits(int num)
{
int i,mask;
for(i=31;i>=0;i--)
{
mask=1<<i;
putchar((num&mask)?'1':'0');
putchar(' ');
   if(i%8==0)
   	   printf("  ");
}
printf("\n\n");


}
/* ----------------------------------------------------------------------------*/

/*******************************************************************************
**--main()Function--
********************************************************************************/
int main(void)
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);//read input
	printf("The %d in binary bits \n\n",num);
	displaybits(num);//print in binary
	clear4thbit(num);//macro call to clear 4th bit on integer
	
	/* to check the num after clear 4th bit */
	printf("After turn off 4th bit num is %d \n",num);
	printf("The %d in binary bits \n\n",num);
	displaybits(num);
	printf("____________________________________________________________________\n");
	return 0;
}