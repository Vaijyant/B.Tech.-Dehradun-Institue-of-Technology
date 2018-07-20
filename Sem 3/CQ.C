//implementation of circular queue
#include<stdio.h>
#include<conio.h>
void main()
{
	int q[5], front = -1, rear = -1, item, ch, pos;
	clrscr();
	do
	{
	    printf("1. Insert\n2. Delete\n3. Traverse\n4. Exit\n");
	    scanf("%d", &ch);
	    switch(ch)
	    {
		case 1:
		printf("Enter an element for circular queue\n");
		scanf("%d", &item);
		if( front == (rear+1)%5 && rear != -1)
		{
			printf("Overflow!\n"); break;
		}
		else
		{
			if(rear == -1)
			{
				front = 0; rear = 0;
			}
			else
			{
				rear = (rear+1)%5;
			}
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
			printf("Value deleted is %d\n", q[front]);
			front = -1; rear = -1;
		}
		else
		{
			printf("Element deleted is %d\n", q[front]);
			front = (front+1)%5;
		}
		break;
		case 3:
		printf("front = %d %d\trear = %d %d\n", front, q[front], rear, q[rear]);
		if(rear != -1)
		{
			pos = front;
			if(front<=rear)
			{
				while(pos<=rear)
				{
					printf("%d\t", q[pos]);
					pos++;
				}
				printf("\n");
			}
			else
			{
				while(pos!=rear)
				{
					printf("%d\t", q[pos]);
					pos = (pos+1)%5;
				}
				printf("%d\n", q[(pos)]);
			}
		}
		else
		{
			printf("Queue is empty\n");
		}
		printf("front %d\trear\t%d\n", front, rear);
		break;
		case 4:
		exit(0);
		default:
		printf("Invalid choice\n");
	    }
	}while(ch != 4 );
	getch();
}