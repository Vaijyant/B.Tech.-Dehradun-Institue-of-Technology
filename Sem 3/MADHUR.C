#include<stdio.h>
int main ()
{
	int num,sum=0,i,c,x,p;
	clrscr();
	for(i=1;i<=1000;i++)
	{
		num=i;
		p=num%10;
		c=num/10;
		while(c!=0)
		{
			x=c%10;
			sum+=x;
			c/=10;
		}
		if(sum==p)
			printf("%d\t",num);
		sum = 0;
	}
	return 0;
}












