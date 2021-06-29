#include<stdio.h>
int n1=30;// n1 and n2 is available upto end of the file
int n2=10;
int sum();
int diff();
int main(void)
{
	printf("The sum of %d and %d is %d\n",n1,n2,sum());
	printf("The dff of %d and %d is %d\n",n1,n2,diff());
	return 0;
}
int s;// It is global but not available in main()
int sum()
{
	return (s=n1+n2);
	 
}
int d;// It is global but not available in main(),sum().
int diff()
{
    n1++;
    n2++;
	return (d=n1-n2);
}

