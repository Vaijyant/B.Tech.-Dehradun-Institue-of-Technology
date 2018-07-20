#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10], i, j, temp;
	clrscr();
	printf("Enter array elements\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<9; i++)
	{
		for (j = 0; j<9-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j] ;
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nSorted Array via Bubble Sort is\n\n");
	for (i=0; i<10; i++)
	{
		printf("%d\n", arr[i]);
	}
	getch();
}