#include<stdio.h>
#include<conio.h>
int arr[100];
int insertSTX(int pos)
{
	int i=0;
	char stx[3]="STX";
	while(i<3)
	{
		arr[pos++]=stx[i++];
	}
	return pos;

}
int insertETX(int pos)
{
	int i=0;
	char etx[3]="ETX";
	while(i<3)
	{
		arr[pos++]=etx[i++];
	}
	return pos;
}
int insertDLE(int pos)
{
	int i=0;
	char dle[3]="DLE";
	while(i<3)
	{
		arr[pos++]=dle[i++];
	}
	return pos;
}
void main()
{
	int i=0, pos=0, c=0;
	char msg [50];
	clrscr();
	printf("Enter the message: ");
	gets(msg);
	pos=insertDLE(0);
	pos=insertSTX(pos);
	while(msg[i]!='\0')
	{
		if(msg[i]=='D' && msg[i+1]=='L' && msg[i+2]=='E')
		{
			pos=insertDLE(pos);
			pos=insertDLE(pos);
			i=i+3;
		}
		else if(msg[i]=='S' && msg[i+1]=='T' && msg[i+2]=='X')
		{
			pos=insertSTX(pos);
			pos=insertSTX(pos);
			i=i+3;
		}
		else if(msg[i]=='E' && msg[i+1]=='T' && msg[i+2]=='X')
		{
			pos=insertETX(pos);
			pos=insertETX(pos);
			i=i+3;
		}
		else
		{
			arr[pos++]=msg[i++];
			pos=insertDLE(pos);
		}
	}
	pos = insertETX(pos);
	printf("Stuffed character sequence is:\n");
	for(i=0; i<pos; i++)
		printf("%c", arr[i]);
	getch();
}