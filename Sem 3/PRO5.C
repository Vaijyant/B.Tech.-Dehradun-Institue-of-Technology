//Area of circle and rectangle
#include<stdio.h>
int cls
main()
{
	float area, peri, l, b, r;
	clrscr();
	printf("Enter the length and breadth of the rectangle\n");
	scanf("%f%f", &l, &b);
	peri = 2*(l+b);
	area = l*b;
	printf("For Rectangle:\nArea = %f\tPerimeter = %f\n\n", area, peri);

	printf("Enter the radius for circle\n");
	scanf("%f", &r);
	area=3.14*(r*r);
	printf("Area of the Circle = %f", area);
	return 0;
}
