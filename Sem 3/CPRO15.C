//Write a program that takes three variable (a, b, c) in as separate parameters and rotates the values stored so that a value goes to be, b to c, c to a.
#include <stdio.h>
int main()
{
	int a, b, c, temp1, temp2, temp3;
	clrscr();
	printf("Enter 3 numbers:\na\tb\tc\n");
	scanf("%d%d%d",&a, &b, &c);
	temp1=a;
	temp2=b;
	temp3=c;
	b=temp1;
	c=temp2;
	a=temp3;
	printf("After shifting\na\tb\tc are:\n%d\t%d\t%d",a,b,c);
	return 0;
}
