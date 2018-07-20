#include<stdio.h>
#include<conio.h>
void main()
{
	int q[5], i, front = -1, rear = -1, item;
	clrscr();
	while(1
	)
	{
		printf("Enter a value for circular queue\n");
		if(front == (rear+1) % 5)
		{
			printf("Queue is full\n"); break;
		}
		else
		{
			scanf("%d", &item);
			if(front==-1)
			{
				front=rear=0;
			}
			else
			       rear=(rear+1)%5;
			q[rear] = item;
		}
	}
	getch();
}