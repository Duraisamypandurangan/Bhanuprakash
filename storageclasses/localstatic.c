#include<stdio.h>
void func();
int main(void)
{
	func();
	func();
	func();
    printf("\n");
	return 0;
}
void func(void)
{
	static int num=1;
	num++;
	printf("%d\t",num);
}



