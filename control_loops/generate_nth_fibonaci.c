#include<stdio.h>
int main(void)
{
	int first=0,last=1,i,n,fib;//initially initialize the fist and last as  0 and 1 respectively.
	printf("Enter the Nth value to generate fibonacci number: ");
	scanf("%d",&n); //read input for Nth value
	for(i=0; i<n; i++)//loop to find nth fibonacci number
	{
		fib=first + last;
		first =last;
		last=fib;
	}
	printf(" the %d th fibonacci number is %d\n",n,fib);// to print final output
	return 0;
}

	
