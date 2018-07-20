#include<conio.h>
#include<stdio.h>
char arr[100];
int appendMarker(int pos)
{
	int i=0;
	char marker[8]={'0', '1', '1', '1', '1', '1', '1', '0'};
	while(i<8)
	{
		arr[pos++]=marker[i++];
	}
	return pos;
}
void main()
{
	int i=0, pos=0, c=0;
	char msg [50];
	clrscr();
	printf("Enter message bits: ");
	gets(msg);
	pos=appendMarker(0);
	while(msg[i]!='\0')
	{
		if(msg[i]=='1')
		{
			c++;
			if(c==5)
			{
				arr[pos++]='1';
				arr[pos++]='0';
				c=0;
			}
			else
			{
				arr[pos++]='1';
			}
		}
		else
		{
			arr[pos++]='0';
			c=0;
		}
		i++;
	}
	pos = appendMarker(pos);
	arr[pos]='\0';
	printf("\nStuffed sequence is:\n");
	puts(arr);
	getch();

}