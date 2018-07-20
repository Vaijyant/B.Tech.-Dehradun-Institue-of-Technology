// Write a program that takes a value of K from user and finds Kth greatest number from given array.
#include<stdio.h>
void main()
{
    int t,i,j,k;
    int a[10]={10,3,5,2,1,7,4,9,6,8};
    clrscr();
    for(i=0;i<10;i++)
    {
	for(j=i+1;j<10;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
    }
    printf("enter the value of k:");
    scanf("%d",&k);
    printf("\n%d greatest number is: %d",k,a[k-1]);
    getch();
}
