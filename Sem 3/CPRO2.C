//Write a C program to sort number of arrays in ascending order using insertion sort.
#include<conio.h>
int main()
{
	int i, j, temp, arr[10];
	clrscr();
	printf("Enter array: \n");
	for(i=0; i<10; i++)
		scanf("%d", &arr[i]);
	for(i=1; i<10; i++)
	{
		temp = arr[i];
		j = i-1;
		while(temp<arr[j] && j>=0)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = temp;
	}
	printf("\nAscending order series is:\n");
	for(i=0; i<10; i++)
		printf(" %d", arr[i]);
	return 0;
}