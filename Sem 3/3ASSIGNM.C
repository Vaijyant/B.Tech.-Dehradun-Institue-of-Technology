//calculate factorial
#include <stdio.h>
int main()
{
	int fact=1, num;
	printf("Enter a number\n");
	scanf("%d", &num);
	while(num!=0)
	{
		fact = fact*num;
		num--;
	}
	printf("\nFactorial of enred number is %d", fact);
	return 0;
}