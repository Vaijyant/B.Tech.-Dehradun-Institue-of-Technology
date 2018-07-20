//Simple program to implemet Linear Search
#include <stdio.h>
#define SIZE 30000
 
void main()
{
	int array[SIZE], search, i;
	clrscr();
	printf("This is a program on linear search\n");
	printf("Entering the elements in array via rand()...\n");
	for ( i = 0 ; i < SIZE ; i++ )
		array[i] = rand();
	printf("Enter the number to search\n");
	scanf("%d",&search);
	for (i = 0 ; i < SIZE ; i++ )
	{
		if ( array[i] == search )
		{
			printf("%d is present at location %d.\n", search, i+1);
			break;
		}
	}
	if ( i == SIZE )
		printf("%d is not present in array.\n", search);     
	getch(); 
}