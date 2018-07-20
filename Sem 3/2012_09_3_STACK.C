//Program to implement a stack
#include<stdio.h>
#include<conio.h>
void push();
int pop();
void traverse();
int stack[5], top = -1;
void main()
{
	int choice;
	clrscr();
	do
	{
		printf("Enter your choice\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Traverse\n");
		printf("4. Exit\n");

		scanf("%d", &choice);
		switch (choice)
		{
			case 1: push(); break;
			case 2: printf("Deleted item is %d\n***\n", pop()); break;
			case 3: traverse(); break;
			case 4: exit(0); break;
			default: printf("Enter a valid choice\n***\n");
		}
	}while(choice !=4);
}
void push()
{
	int item;
	printf("Enter the element\n");
	scanf("%d", &item);
	if (top==4)
		printf("Stack is full\n");
	else
	{
		top = top+1;
		stack[top] = item;
	}
}
int pop()
{
	int item;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		item = stack[top];
		top = top-1;
	}
	return(item);
	}
void traverse()
{
	int i;
	if (top == -1)
		printf("Stack is empty\n");
	else
	{
		for(i=top; i>=0; i--)
		{
			printf("%d\n", stack[i]);
		}
	}
}
