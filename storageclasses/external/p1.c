#include<stdio.h>
int gnum=10;
static int snum=5;
void file2();
int inc(void);
 static int dec(void);
int main()
{
	gnum;
	snum;
	printf("%d %d \n",gnum,snum);
	inc();
	dec();
	file2();
	return 0;
}
int inc(void)
{
	gnum++;
	snum++;
	printf("%d %d \n",gnum,snum);
}
static int dec(void)  //we can't call this function from another file
{
	gnum--;
	snum--;
	printf("%d %d \n",gnum,snum);
}

