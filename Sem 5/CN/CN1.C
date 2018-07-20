#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	char msg[20], code[100]; int msglen, codelen, t, p=0, i=0, c1=0, pos=0, c=0, k=0;
	clrscr();
	printf("Enter message bits: ");
	scanf("%s", &msg);
	msglen = strlen(msg);

	while(msglen > pow(2, p)-p-1)
	{
		p++;
	}
	codelen = p+msglen;
	printf("\nlength of coded message is =%d\n", codelen);
	t=pow(2, c)-1;
	while(i<codelen)
	{
		if(i==t)
		{
			code[i]='*';
			t = pow(2, ++c)-1;
		}
		else
		{
			code[i]=msg[k++];
		}
		i++;
	}
	code[codelen] = '\0';
	printf("\nParity positions are: ");
	puts(code);

	c=0;k=0;
	i=pow(2, c)-1;
	while(i<codelen)
	{
		p=1;
		pos=i;
		while(pos<codelen)
		{
			k=pos;
			while(p<=pow(2, c))
			{
				if(code[k] == '1')
					c1++;
				p++;
				k++;
			}

			p=1;
			pos=k+pow(2, c);
		}
		if(c1%2==0)
			code[i]='0';
		else
			code[i]='1';
		c++;
		c1=0;
		i=pow(2, c)-1;
	}
	printf("\nCoded message is: "); puts(code);
	getch();
}