/* Progrm 12 : Pattern 4
     1
    2 3
   4 5 6
  7 8 9 10 */
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, k, c=1;
	printf ("This is pattern progrm 4\n");
	for(i=1; i<=4; i++)
	{
		for (j=4; j>=i; j--)
		{
			printf(" ");
		}
		for (k=1; k<=i; k++)
		{
			printf("%d ", c);
			c++;
		}
		printf("\n");
	}
	getch();
}
