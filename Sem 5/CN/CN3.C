#include<stdio.h>
#include<conio.h>

int ipb[32];
int j=7;

void toBinary(int n)
{

	int i=j;
	while(n !=0 && i>=j-7)
	{
		ipb[i]=n%2;
		n=n/2;
		i--;
	}
	j=j+8;
}
void displayClass()
{
	if(ipb[0] == 0)
	{
		printf("Class A.");
	}
	else if (ipb[1] == 0)
	{
		printf("Class B.");
	}
	else if (ipb[2] == 0)
	{
		printf("Class C.");
	}
	else if (ipb[3] == 0)
	{
		printf("Class D.");
	}
	else
	{
		printf("Class E.");
	}
}
void main()
{
	char ip[15]; int ipc[4] ={0, 0, 0, 0}, i=0, k=0, n, flag=0;
	clrscr();
	printf("Enter an IP address: ");
	gets(ip);
	while(i<32)
	{
		ipb[i]==0;
		i++;
	}
	i=0;
	while(ip[0] != '.' && ip[i] != '\0' && k<=3)
	{
		if(ip[i]>='0' && ip[i]<='9')
		{
			n = ip[i] - 48;
			ipc[k] = ipc[k]*10+n;
		}
		else if(ip[i]=='.')
		{
			if(ip[i+1]=='.')
				break;
			else
				k++;
		}
		else
		{
			flag =1;
			break;
		}
		i++;
	}
	if(flag ==0 && k == 3 && ip[i-1] != '.' && ipc[0]<=255 && ipc[1]<=255 && ipc[2]<=255 && ipc[3]<=255)
	{
		for(i=0; i<4; i++)
		{
			toBinary(ipc[i]);
		}
		printf("\nIP in binary format: ");

		for(i=0; i<32; i++)
			printf("%d", ipb[i]);
		printf("\n\nIP belongs to: ");
		displayClass();
	}
	else
	{
		printf("Invalid IP");
	}
	getch();
}