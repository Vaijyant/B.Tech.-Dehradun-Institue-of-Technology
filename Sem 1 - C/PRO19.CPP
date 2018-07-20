//Program 19 : To check weather given number is palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, rev=0, cut, cnum;
	printf("Enter a number\n");
	scanf("%d", &num);
	cnum = num;
	while(cnum!=0)
	{
		cut = cnum%10;
		rev = rev*10+cut;
		cnum = cnum/10;
	}
	if(num==rev)
		printf("Palindrome Number");
	else
		printf("Not a palindrome");
	getch();
}