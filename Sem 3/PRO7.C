//reverse a number
#include<stdio.h>
int main()
{
	int num, rev=0, cpy, c;
	clrscr();
	printf("Enter a number\n");
	scanf("%d", &num);
	cpy = num;
	while(cpy!=0)
	{
		c=cpy%10;
		rev = (rev*10)+c;
		print("\n\nRev = %d\n\n", rev);
		cpy=cpy/10;
	}
	printf("Reverse Number = %d", rev);
	return 0;
}