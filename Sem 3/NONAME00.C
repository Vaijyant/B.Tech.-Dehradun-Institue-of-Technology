//implementation of circular queue
#include<stdio.h>
#include<conio.h>
void main()
{
	int q[5], front = rear = -1, item, ch;
	do
	{
	    printf("1. Insert\n2. Delete\n3. Traverse\n4. Exit\n")
	    scanf("%d");
	    switch(ch)
	    {
		case 1:
		printf("Enter an element for circular queue");
		scanf("%d", &item);
		if(rear == -1)
		{
			front = rear = 0
		}
		else if(front>rear)
		{
			printf("Overflow!\n");
		}
		else
		{
			rear = (rear+1)%5;
		}
		q[rear] = item;
		break;
		case 2:
		if (front == -1)
		{
			printf("Underflow! Queue is empty\n");
		}
		else if (front == rear && front != -1)
		{
			printf("Value deleted is %d\n", q)
		}
		else
		{
			printf("Element deleted is %d\n", q[front])
			front = (front+1)%5;
		}
		case 4:
	}while(ch != 4);
}