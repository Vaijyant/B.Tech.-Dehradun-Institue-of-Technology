//Program to implement binary search
#include <stdio.h>
 
void main()
{
	int i, first, last, middle, search, array[10];
	printf("This is a program on binary search\n");
	printf("Enter the elements in sorted order for array\n");
	for ( i = 0 ; i < 10 ; i++ )
		scanf("%d",&array[i]);
	printf("Enter the number to search\n");
	scanf("%d",&search);

	first = 0;
	last = 9;
	middle = (first+last)/2;
	while( first <= last )
	{
		if ( array[middle] < search )
			first = middle + 1;
		else if ( array[middle] == search )
		{
			printf("%d found at location %d.\n", search, middle+1);
			break;
		}
		else
			last = middle - 1;
		middle = (first + last)/2;
   	}
	if ( first > last )
	printf("Not found! %d is not present in the list.\n", search);
	getch();
}