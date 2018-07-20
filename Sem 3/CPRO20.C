//Write a C program that searchen an array a[n] for the element x, if occurs then set j to ots position in array, else set j to -1
#include<stdio.h>
int main()
{
	int a[100],n,i,temp,j;
	clrscr();
	printf("Enter the limit of array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter an element to be searched : ");
	scanf("%d",&temp);
	for(i=0;i<n;i++)
	{
		if(a[i]==temp)
		j=i;
		else
		j=-1;
	}
	printf("j = %d",j+1);
	return 0;
}