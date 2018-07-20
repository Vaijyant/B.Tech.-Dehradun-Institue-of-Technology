//Two sets (arrays) A and B are given. Find two no. a and b from A and B respectively such that a+b=val is another input
#include <stdio.h>
int main()
{
	int a[100],b[100],i,j,n,z;
	clrscr();
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter Elements of array one : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter elements of array two : ");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	printf("Enter sum of two values : ");
	scanf("%d",&z);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if((a[i]+b[j])==z)
				printf("\n%d,%d",a[i],b[j]);
	}
	return 0;
}