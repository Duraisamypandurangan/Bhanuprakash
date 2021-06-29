#include<stdio.h>
#define MAX 100
void printarray( int arr[],int n);
int main(void)
{
    int i,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    //read the values for array
    for(i=0;i<n;i++)
    {   
        printf("Enter the value for  arr[%d] :",i);
        scanf("%d",&arr[i]);
    }   
    printarray(arr,n);
    printf("The size of arr is %ld\n",(char*) (&arr +1) - (char*) (&arr));//to find size of array without sizeof operator.
}
//function to print array elements.
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("\n");
}


