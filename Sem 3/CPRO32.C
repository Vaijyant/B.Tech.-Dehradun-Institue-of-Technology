//Write a program that accepts a character c. The program returns the string with all occurence of c removed.
int main()
{
	char *ch,a,b;
	int l=0, i;
	clrscr();
	printf("Enter any string =\n");
	scanf("%[^\n]s",ch);
	scanf("%c",b);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	printf("Enter a character to be removed :\n");
	scanf("%c",	&a);
	for(i=0;i<l;i++)
		ch--;
	ch++;
	while(l>0)
	{
		if(*ch==(char)a)
		{
			ch++;
		}
		printf("%c",	*ch);
		l--;
		ch++;
	}
	return 0;
}
