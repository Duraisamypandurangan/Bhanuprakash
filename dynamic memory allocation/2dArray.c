/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :2dArray.c

DESCRIPTION:This file contains  to create user defined 2D dynamic array
*******************************************************************************/

/*******************************************************************************
** -- File Inclusion --
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
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

FUNCTION NAME:Init

DESCRIPTION: This function initializes variables

PARAMETER DESCRIPTION: void

RETURN VALUE: void

----------------------------------------------------------------------------- */
void Init(void)
{
   /*Initialize Variables specific to Demo */

	

}

/* ----------------------------------------------------------------------------*/

/*******************************************************************************
**--main()Function--
********************************************************************************/
int main()
{

	int row,col,n,i,j;
	printf("Enter the number of rows :");
	scanf("%d",&row);
	printf("Enter the number of columns :");
	scanf("%d",&col);
	n=row*col;
    	int (*ptr) [col];//pointer to an array
	ptr=calloc(n,sizeof(int));//memory allocation to array pointer
	if (ptr == NULL) // if memory allocation failed
        {	
        printf("Memory not allocated.\n");
        exit(0);
        }  
        else 
        {
 
        printf("Memory successfully allocated using calloc.\n");
        } 
	
	printf("Enter the 2-D array elements :\n");
	//Read array elements
	for(i=0;i<row;i++)//for row count
	{
		for(j=0;j<col;j++)//for column count
		{
			printf("array[%d][%d]= ",i,j);
			scanf("%d",(*(ptr+i)+j));//pointer notation
		
		}
	}
    //print array elements
    printf("\n2-D Array elemrnts are :\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		   printf("%3d  ",ptr[i][j]);//subscript notation

		}
		   		printf("\n\n");
	}
	free(ptr);
	return 0;
}

	

