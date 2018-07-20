//Write a program to create a duncrion frequency that determines the frequency of occurence of each distincr character
#include<stdio.h>
int main()
{
	char string[100],ch;
	int c=0,count[26]={0};
	clrscr();
	printf("Enter a string\n");
	gets(string);
	while(string[c]!='\0')
	{
		if(string[c]>='a'&&string[c]<='z')
		count[string[c]-'a']++;
		c++;
	}
	for(c=0;c<26;c++)
	{
		if(count[c]!=0)
		printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
	}
	return 0;
}