#include<stdio.h>
#include<conio.h>
void main()
{
	char st1[16], st2[16];
	int bst1[16], bst2[16], res[16], i=0, k, h=0;
	clrscr();
	printf("Enter two binary strings\n");
	gets(st1);
	gets(st2);
	while(st1[i] != '\0')
	{
		if(st1[i] == '1')
			bst1[i]=1;
		else
			bst1[i]=0;
		if(st2[i] == '1')
			bst2[i]=1;
		else
			bst2[i]=0;
		i++;
	}
	if(st2[i] == '\0')
	{
		i--;
		while(i>=0)
		{

			if((bst1[i]^bst2[i])==1)
			{
				h++;
			}
			i--;
		}
		printf("Hamming distance is: %d", h);
	}
	else
	{
		printf("Unequal lengths!! Cannot determine hamming distance.");
	}
	getch();
}