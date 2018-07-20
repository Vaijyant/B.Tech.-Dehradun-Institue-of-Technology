#include<stdio.h>
#include<conio.h>
void main(int c,char *v[])
{

FILE *fs,*ft;
char ch;
clrscr();
fs=fopen(v[1],"r");
ft=fopen(v[2],"w");
if(fs==NULL)
{
puts("\n\n\n  can not open source file");
exit(1);
}
else
{
printf("\n\n\n  first file content \n\n");
 while((ch=getc(fs))!=EOF)
 {
  printf("%c",ch);
  putc(ch,ft);
 }
 getch();
}

close(ft);
close(fs);
ft=fopen(v[2],"r");
if(ft==NULL)
{
printf("\n\n\tfile not exist");
exit(1);
}
else
{
printf("\n\n\t\tsecond file content \n\n");
 while((ch=getc(ft))!=EOF)
 {
  printf("%c",ch);
 grtch();
 }
}
//fclose(fs);
close(ft);
getch();
}

