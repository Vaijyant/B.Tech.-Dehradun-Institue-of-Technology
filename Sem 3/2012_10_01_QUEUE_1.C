#include<stdio.h>
#include<conio.h>
void main()
{
	int q[5], front = -1, rear = -1, i, ch;
	clrscr();
	do
	{
		printf("\nEnter choice:\n");
		printf("1. Insertion in a queue\n2. Deletion in a queue\n3. Exit\n\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
			printf("Enter a value for the Queue\n");
			if(front == -1)
			{
				front = rear = 0;
			}
			else
			{
				rear = rear+1;
			}

			scanf("%d", &q[rear]);
			if(rear == 5)
			{
				printf("Stack is full");
				break;
			}
			break;
			case 2:
			printf("This section deletes the value\n");
			printf("value deleted is %d\n***\n", q[front]);

				front++;

			break;
			case 3:
			exit(0);
			default:
			printf("Invalid choice: Emter your choice again\n");
		}
	}while(ch!=3);
	getch();
}
