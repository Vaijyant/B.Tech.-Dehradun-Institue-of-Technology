//Write a macro that obtains the largest of three numbers.
#include <stdio.h>
#define max(a,b) ((a>b)?a:b)
#define maxthree(a,b,c) (max(max(a,b),c))
int main()
{
	int x,y,z,w;
	clrscr();
	printf("enter three numbers :\n");
	scanf("%d%d%d",&x,&y,&w);
	z=maxthree(x,y,w);
	printf("Maximum of three value is %d",z);
	return 0;
}