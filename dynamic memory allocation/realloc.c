/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :realloc.c

DESCRIPTION:This file contains  illustration realloc function.
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
 
    
    int *ptr,n,m,index; //declare one pointer,for dynamic memory allocation
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    ptr = (int*)malloc(n * sizeof(int));//for memory allocation using melloc
 
    if (ptr == NULL) // if memory allocation failed
    {	
        printf("Memory not allocated.\n");
        exit(0);
    }
    else 
    {
 
        printf("Memory successfully allocated using malloc.\n");
    }
 
        for (index = 0; index < n; ++index)//to store values in array
        {
           printf("Enter the value for ptr[%d] : ",index);
           scanf("%d",&ptr[index]);
        }
 
        printf("The elements of the array are: ");
        for (index = 0; index < n; ++index) //to display stored values
        {
            printf("%d  ", ptr[index]);
        }
        printf("\n");
        //to add some more memory location to same pointer
        printf("Enter the New size :");
        scanf("%d",&m);
        ptr=realloc(ptr,n*sizeof(int));
        if (ptr == NULL) // if memory allocation failed
        {	
        printf("Memory not allocated.\n");
        exit(0);
        }  
        else 
        {
 
        printf("Memory successfully allocated using realloc.\n");
        }  
 
        for (index = n; index < m; ++index)//to store values in array
        {
           printf("Enter the value for ptr[%d] : ",index);
           scanf("%d",&ptr[index]);
        }
 
        printf("The elements of the array are: ");
        for (index = 0; index < m; ++index) //to display stored values
        {
            printf("%d  ", ptr[index]);
        }
        printf("\n");
 	free(ptr);
 
    return 0;
}
