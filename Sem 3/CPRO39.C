/*given string "123456789" Write a program to display the following.
    1
   232
  34543
 4567654
567898765*/
#include <stdio.h>
int main()
{
	int i,j,k;
	clrscr();
	printf("\n");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=31-i;j++)
		printf(" ");
		for(j=i,k=(2*i-1)/2+1;k;j++,k--)
		{
			if(j==10)
				j=0;
			printf("%d",j);
		}
		for(j-=2,k=(2*i-1)/2;k;j--,k--)
		{
			if(j==-1)
				j=9;
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
