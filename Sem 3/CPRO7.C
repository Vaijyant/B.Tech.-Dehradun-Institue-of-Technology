//Write a function that would round a floating point number to an indicated decimal place.
#include<stdio.h>
#include<math.h>
int main()
{
	float num, dec, ans;
	int cpy, p;
	clrscr();
	printf("Enter number to round off\n");
	scanf("%f", &num);
	printf("Enter the number of places you wish to round off\n");
	scanf("%d", &p);
	cpy = num*pow(10, p);
	dec = (num*pow(10, p)) - cpy;
	printf("\n%f\n", dec);
	if (dec>=0.5)
		ans = (cpy+1)/pow(10, p);
	else
		ans = cpy/pow(10, p);
	printf("Round off value = %f", ans);
	return 0;
}

