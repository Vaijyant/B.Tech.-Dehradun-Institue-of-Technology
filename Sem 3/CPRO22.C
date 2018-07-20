//Binomial co-efficient
#include<stdio.h>
int fact(int); 
void main() 
{ 
	int n,r,f; 
	printf("enter value for n & r\n");	 
	scanf("%d%d",&n,&r); 
	if(n<r) 
		printf("invalid input"); 
	else 
		f=fact(n)/(fact(n-r)*fact(r)); 
	printf("binomial coefficient=%d",f); 
} 
int fact(int x) 
{ 
	if(x>1) 
	return x*fact(x-1); 
	else 
	return 1; 
}
