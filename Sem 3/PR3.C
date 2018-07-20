//Prime numbers
#include <stdio.h>
int main()
{
	int i,j, c=0;
	clrscr();
	printf("Prime numbers between 1 and 999 are\n");
	for (i=2; i<=999; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(i%j==0)
				c++;
		}
		if(c==1)
			printf("%d\t", i);
		c=0;
	}
	return 0;
}
