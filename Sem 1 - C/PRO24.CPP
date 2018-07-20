#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5]={1,2,3,4,5};
	int *ptr;
	ptr=a;
	printf("address: %p - array value:%d \n",ptr,*ptr);
	ptr++;
	printf("address: %p - array value:%d \n",ptr,*ptr);
	getch();
}