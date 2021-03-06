/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :1dArray.c

DESCRIPTION:This file contains functions to create user defined 1D dynamic array
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

/*******************************************************************************
**--main()Function--
********************************************************************************/

int main(void)
{
	int *ptr,n,i;
	//for 1-D array
	printf(" Enter the size on 1-D array :");
	scanf("%d",&n);
	ptr=calloc(n,sizeof(int));

        if (ptr == NULL) // if memory allocation failed
        {	
        printf("Memory not allocated.\n");
        exit(0);
        }  
        else 
        {
 
        printf("Memory successfully allocated using calloc.\n");
        } 
 
	printf("Enter the array elements \n");
	for(i=0;i<n;i++) //Read Array Elements
	{
		printf("ptr[%d] = ",i);
		scanf("%d",&(*(ptr+i)));
	}
	printf("1-D array Elements are :\n");
	for(i=0;i<n;i++)//Display Array Elements
	{
		printf("ptr[%d]= %d  ",i,*(ptr+i));
	}
	printf("\n");
	free(ptr);
}
