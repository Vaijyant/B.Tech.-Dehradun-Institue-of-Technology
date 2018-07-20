//Program 17 : Print result of 5 students
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int roll[5], marks[5][3], student_total[5], max = -1;
	int i, j, s;
	printf("Enter data\n");
	for(i=0; i<5; i++)
	{
		printf("Enter Roll number\t");
		scanf("%d", &roll[i]);
		for(j=0; j<3; j++)
		{
			printf("Marks for subject %d: ", (j+1));
			scanf("%d", &marks[i][j]);
		}
	}
	for(i=0; i<5; i++)
	{
		student_total[i]=0;
		for(j=0; j<3; j++)
			student_total[i]+=marks[i][j];
		if(max<student_total[i])
		{
			max=student_total[i];
			s=i;
		}
	}
	printf("Roll No.\tMarks: Sub1\tSub2\tSub3\tStudent Total\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t\t\t ", roll[i]);
		for(j=0; j<3; j++)
			printf("%d\t ", marks[i][j]);
		printf("%d\n", student_total[i]);
	}
	printf("Maximum marks are of Student %d : %d", roll[s], max);
	getch();
}