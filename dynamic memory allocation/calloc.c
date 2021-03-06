/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :calloc.c

DESCRIPTION:This file contains illustration calloc function
*******************************************************************************/

/*******************************************************************************
** -- File Inclusion --
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

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
int main()
{
 
    
    int *ptr,n,index;
    
 
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    //Memory allocation using calloc function
 	ptr = (int*)calloc(n,sizeof(int));
 
    //to check memory allocated or not
    if (ptr == NULL) 
    {	
        printf("Memory not allocated.\n");
        exit(0);
    }
    else 
    {
 
        printf("Memory successfully allocated using callloc.\n");
    }

	//store values in memory location
        for (index = 0; index < n; index++)
        {
           printf("Enter the value for ptr[%d] : ",index);
           scanf("%d",&ptr[index]);
        }
    //display stored values in memory
        printf("The elements of the array are: ");
        for (index = 0; index < n; index++) 
        {
            printf("%d  ", ptr[index]);
        }
        printf("\n");
     	free(ptr); 
    return 0;
}
