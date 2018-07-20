/*Print these pattern:
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1*/
#include<stdio.h>
int main()
{
	int i, j, k;
	clrscr();
	for(i=4; i>=1; i--)
	{
		for (j=i; j>=1; j--)
		{
			printf(" ");
		}
		for (k=j; k<=i; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}
