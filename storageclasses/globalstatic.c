#include<stdio.h>
static int snum=10;
void func1(void);
void func2(void);
void func3(void);

int main(void)
{
	int num=10;
	printf(" The snum in main() %d\n",snum);
	snum+=num;
	func1();
	func2();
	func3();
	return 0;
}
void func1(void)
{
	printf("The snum in func1() %d\n",snum);
}
void func2(void)
{
	snum++;
	printf("The snum in func2() %d\n",snum);
}
void func3(void)
{
    snum=1;
	printf("The snum in func3() %d\n",snum);
}
	


