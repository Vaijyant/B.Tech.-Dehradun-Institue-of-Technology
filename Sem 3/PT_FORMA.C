void main()
{
char *ch,*c;
int l=0,i,f=0;
clrscr();
printf("\n\n\tenter any string = ");
scanf("%[^\n]s",ch);
c=ch;
*ch=*ch-32;
while(*ch!='\0')
{
if(*ch==' ')
 {
 ch++;
 *ch=*ch-32;
 }
 else
 {
 ch++;
 }
}

printf("\n\n\tstring in upper case = %s",c);
getch();
}
































