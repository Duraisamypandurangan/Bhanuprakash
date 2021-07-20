/*******************************************************************************
** COPYRIGHT (C) 2021 Infiquity. ALL RIGHTS RESERVED.
--------------------------------------------------------------------------------
FILE NAME  :malloc.c

DESCRIPTION:This file contains  illustration malloc function.
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
 
    
    int *ptr,n,index; //declare one pointer,for dynamic memory allocation
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
        free(ptr);
    return 0;
}
