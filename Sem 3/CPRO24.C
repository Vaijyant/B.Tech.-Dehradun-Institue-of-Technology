//Sum of factors
#include<stdio.h>
int main()
{
	int a,sum=0,i;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	if(a%i==0)
	sum=sum+i;
	printf("The addition of its factors is : %d",sum);
	return 0;
}
