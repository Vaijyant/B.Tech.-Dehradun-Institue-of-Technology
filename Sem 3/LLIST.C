//Program to implement singly Linked List
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
void insert_beg();
void insert_end();
void insert_loc();
void del_beg();
void del_end();
void del_loc();
void traverse();
struct node
{
	int val;
	struct node *next;
};
typedef struct node NODE;
NODE *start = NULL;
int item, no_of_elements = 0;
void main()
{
	int ch, sub_ch, sub_ch2;
	clrscr();
	do
	{
		printf("\n1. Insert an Element\n2. Delete an element\n3. Traverse\n4. Exit\n");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1:
			printf("Where do you want to insert an element?\n");
			printf("1. Beginning\n2. End\n3. At a specified locaion\n");
			scanf("%d", &sub_ch);
			switch (sub_ch)
			{
				case 1:
				insert_beg();
				break;
				case 2:
				insert_end();
				break;
				case 3:
				insert_loc();
				break;
				default: printf("Invalid choice\n");
				break;
			}
			break;
			case 2:
			printf("\nWhere do you want to delete an element from?\n");
			printf("1. Beginning\n2. End\n3. At a specified locaion\n");
			scanf("%d", &sub_ch2);
			switch (sub_ch2)
			{
				case 1:
				del_beg();
				break;
				case 2:
				del_end();
				break;
				case 3:
				del_loc();
				break;
				default: printf("Invalid choice\n");
				break;
			}
			break;
			case 3:
			traverse();
			break;
			case 4:
			exit(0);
			break;
			default: printf("Invalid choice\n");
			break;
		}
	}while(ch != 4);
	getch();
}
void insert_beg()
{
	NODE *ptr = (NODE *) malloc(sizeof(NODE));
	printf("Enter an element\n");
	scanf("%d", &item);
	ptr->val = item;
	if (start == NULL)
	{
		start = ptr;
		ptr->next = NULL;
		no_of_elements++;
	}
	else
	{
		ptr->next = start;
		start=ptr;
		no_of_elements++;
	}
}
void insert_end()
{
	NODE *ptr, *loc;
	ptr = (NODE *) malloc (sizeof(NODE));
	printf("Enter an element\n");
	scanf("%d", &item);
	ptr->val = item;
	if(start == NULL)
	{
		ptr->next = NULL;
		start = ptr;
		no_of_elements++;
	}
	else
	{
		loc = start;
		while(loc->next != NULL)
			loc = loc->next;
		loc->next = ptr;
		ptr->next = NULL;
		no_of_elements++;
	}
}
void insert_loc()
{
	NODE *ptr, *temp; int pos, i=1;
	temp = start;
	printf("\nEnter an element\n");
	scanf("%d", &item);
	printf("Enter the position at which you want to insert the element\n");
	scanf("%d", &pos);
	if(pos>no_of_elements)
	{
		printf("Cannot insert value at this position\n");
	}
	else
	{
		ptr = (NODE *) malloc(sizeof(NODE));
		while(i<pos)
		{

			temp = temp->next;
			i++;
		}
		ptr->next = temp->next;
		temp->next = ptr;
	}

}
void del_beg()
{
	NODE *fr;
	if(start == NULL)
	{
		printf("List is empty. Cannot delete.\n");
	}
	else
	{
		printf("Value deleted is %d", start->val);
		fr = start;
		start = start->next;
		free(fr);
		no_of_elements--;
	}
}
void del_end()
{
	NODE *fr, *loc;
	loc = start;
	while(loc->next != NULL)
	{
		fr =loc;
		loc = loc->next;
	}
	printf("Element deleted is %d\n", loc->val);
	fr->next = NULL;
	free(loc);
	no_of_elements--;
}
void del_loc()
{
	int i=1, pos;
	NODE *temp, *loc;
	printf("Enter the position from which you want to delete the element\n");
	scanf("%d", &pos);
	if(pos>no_of_elements)
	{
		printf("Cannot delete value from this position\n");
	}
	else
	{
		while(i<pos)
		{

			loc = temp;
			temp = temp->next;
			i++;
		}
		loc->next = loc->next;
		printf("Value deleted is %d\n", temp->val);
		free(temp);
		no_of_elements--;
	}
}
void traverse()
{
	NODE *temp;
	temp = start;
	while (temp->next != NULL)
	{
		printf("%d\t", temp->val);
		temp = temp->next;
	}
	printf("%d\t", temp->val);
}