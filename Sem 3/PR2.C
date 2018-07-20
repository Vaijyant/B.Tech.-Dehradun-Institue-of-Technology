//Armstrong number between  1 and 999
#include <stdio.h>
int main()
{
	int check = 0,i, ci, l;
	clrscr();
	printf("armstrong number between 1 & 999 are\n");
	for(i=1; i<=999; i++)
	{
		ci = i;
		while(ci != 0)
		{
			l=ci%10;
			check = check + (l*l*l);
			ci = ci/10;
		}
		if (check == i)
			printf("%d\n", i);
		check = 0;
	}
	return 0;
}

