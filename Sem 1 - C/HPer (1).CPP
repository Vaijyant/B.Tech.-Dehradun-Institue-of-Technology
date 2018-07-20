#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//question 1
/*int fact(int);
int power(int,int);
int main()
{
	int a,b,x,i;
	float sum=0.0;
	clrscr();
	printf("Enter the value of x : ");
	scanf("%d",&a);
	printf("Enter the value of n : ");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		x=power(a,i);
		sum=sum+(float)x/fact(i);
	}
	printf("The sum is : %f",sum+1);
	getch();
}
int fact(int y)
{
	int ret=1;
	if(y==0)
	return 1;
	else
	{
		while(y>0)
		{
			ret=ret*y;
			y--;
		}
		return ret;
	}
}
int power(int f, int c)
{
	int p=1,j;
	for(j=1;j<=c;j++)
	p*=f;
	return p;
}/

//question 2
int main()
{
	int a[100],i,n,temp,k;
	clrscr();
	printf("Enter the array limit : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(k=i;k<n-1;k++)
		if(a[i]>a[k+1])
		{
			temp=a[i];
			a[i]=a[k+1];
			a[k+1]=temp;
		}
	}
	printf("\nAfter Sorting : ");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	getch();
}/

//question 3
int main()
{
	int a,b[20],c=0,i=0;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a>0)
	{
		b[i]=a%2;
		a=a/2;
		c++;
		i++;
	}
	printf("Its Binary number is : ");
	for(i=c-1;i>=0;i--)
	printf("%d",b[i]);
	getch();
}*

//question 6
int main()
{
	int a,b[20],c=0,i=0;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a>0)
	{
		b[i]=a%16;
		a=a/16;
		c++;
		i++;
	}
	printf("Its Hexadecimal number is : ");
	for(i=c-1;i>=0;i--)
	{
		switch(b[i])
		{
			case 10:
			printf("A");
			break;
			case 11:
			printf("B");
			break;
			case 12:
			printf("C");
			break;
			case 13:
			printf("D");
			break;
			case 14:
			printf("E");
			break;
			case 15:
			printf("F");
			break;
			default:
			printf("%d",b[i]);
		}
	}
	getch();
}*

//question 4
int main()
{
	int a[100],i,n,temp,k;
	clrscr();
	printf("Enter the array limit : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(k=i;k<n-1;k++)
		if(a[i]>a[k+1])
		{
			temp=a[i];
			a[i]=a[k+1];
			a[k+1]=temp;
		}
	}
	printf("\nAfter Sorting : ");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	printf("\nEnter new element to enter : ");
	scanf("%d",&a[i]);
	printf("\nAgain after sorting : ");
	for(i=0;i<n;i++)
	{
		for(k=i;k<n;k++)
		if(a[i]>a[k+1])
		{
			temp=a[i];
			a[i]=a[k+1];
			a[k+1]=temp;
		}
	}
	for(i=0;i<=n;i++)
	printf("\n%d",a[i]);
	getch();
}*
/


//question 41
int main()
{
	int a[100],b[100],i,j,n,z;
	clrscr();
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter Elements of array one : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter elements of array two : ");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	printf("Enter sum of two values : ");
	scanf("%d",&z);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if((a[i]+b[j])==z)
		printf("\n%d,%d",a[i],b[j]);
	}
	getch();
}*

//question 13
int main()
{
	char ch;
	char add[50];
	int age,day,month,year;
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your date of birth : ");
	printf("Day : ");
	scanf("%d",&day);
	printf("Month : ");
	scanf("%d",&month);
	printf("Year : ");
	scanf("%d",&year);
	printf("Enter your address : ");
	scanf("%c",&ch);
	gets(add);
	printf("\nYour Information is : ");
	printf("\nAge : %d\nDate Of Birth : %d:%d:%d\nAddress : ",age,day,month,year);
	puts(add);
	getch();
}*

//question 12 cpp
class bank
{
	char name[100],acctype[20];
	int accno,balance;
	int depo,with;
	public:
	bank()
	{
		accno=0.0;
		balance=0.0;
	}
	void deposit()
	{
		printf("Enter your name : ");
		scanf("%s",name);
		printf("Enter your account no : ");
		scanf("%d",&accno);
		printf("Enter your account type : ");
		scanf("%s",acctype);
		printf("Enter the amount to be deposited : ");
		scanf("%d",&depo);
		balance=balance+depo;
	}
	void withdraw()
	{
		printf("Enter an amount to withdraw : ");
		scanf("%d",&with);
		balance=balance-with;
		printf("Left balance : %d",balance);
	}
	void disp()
	{
		printf("\n\nName : ");
		puts(name);
		printf("\nBalance : %d",balance);
	}
}a;
int main()
{
	clrscr();
	a.deposit();
	a.withdraw();
	a.disp();
	getch();
}*

//question 19
int main()
{
	clrscr();
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d",a);
		if(b>c)
		printf(" %d %d",b,c);
		else
		printf(" %d %d",c,b);
	}
	if(b>a&&b>c)
	{
		printf("%d",b);
		if(a>c)
		printf(" %d %d",a,c);
		else
		printf(" %d %d",c,a);
	}
	if(c>a&&c>b)
	{
		printf("%d",c);
		if(a>b)
		printf(" %d %d",a,b);
		else
		printf(" %d %d",b,a);
	}
	getch();
}*

//question 21
int main()
{
	clrscr();
	int a=0,b=1,c,n;
	printf("Enter no. of digits in fibonacci series to be printed : ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	while((n-2)!=0)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		n--;
	}
	getch();
}*

//question 15
int main()
{
	clrscr();
	int a,b,c,temp1,temp2,temp3;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	temp1=a;
	temp2=b;
	temp3=c;
	b=temp1;
	c=temp2;
	a=temp3;
	printf("After shifting : %d %d %d",a,b,c);
	getch();
}*

//question 24
int main()
{
	clrscr();
	int a,sum=0,i;
	printf("Enter a number : ");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	if(a%i==0)
	sum=sum+i;
	printf("The addition of its factors is : %d",sum);
	getch();
}*

//question 20
int main()
{
	int a[100],n,i,temp,j;
	clrscr();
	printf("Enter the limit of array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter an element to be searched : ");
	scanf("%d",&temp);
	for(i=0;i<n;i++)
	{
		if(a[i]==temp)
		j=i;
		else
		j=-1;
	}
	printf("j = %d",j+1);
	getch();
}*

//question 23
int ackermann(int m, int n)
{
	if(!m)
	return n+1;
	if(!n)
	return ackermann(m-1,1);
	return ackermann(m-1,ackermann(m, n - 1));
}
int main()
{
	int m,n;
	for(m=0;m<=4;m++)
	for(n=0;n<6-m;n++)
	printf("A(%d, %d) = %d\n",m,n,ackermann(m, n));
	return 0;
}*

//question 26
static long step;
static void Hanoi(int n,int from,int to,int spare)
{
	if(n>1)
	Hanoi(n-1,from,spare,to);
	printf("Step %ld: move #%d %d-->%d\n",++step,n,from,to);
	if(n>1)
	Hanoi(n-1,spare,to,from);
}
int main (int argc, char **argv)
{
	int n;
	if(argc==1||(n=atoi(argv[1]))<=0)
	n=5;
	step=0;
	Hanoi(n,1,2,3);
	getch();
	return 0;
}*

//question 39
int main()
{
	int i,j,k;
	clrscr();
	printf("\n");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=31-i;j++)
		printf(" ");
		for(j=i,k=(2*i-1)/2+1;k;j++,k--)
		{
			if(j==10)
			j=0;
			printf("%d",j);
		}
		for(j-=2,k=(2*i-1)/2;k;j--,k--)
		{
			if(j==-1)
			j=9;
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}*

//question 10
int main()
{
	int a[20][20],i,j,n,spc=25,k;
	clrscr();
	printf("\n Enter the number of lines : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=spc-2*i;k>=0;k--)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0||i==j)
			a[i][j]=1;
			else
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}*

//question 16
void comb(char *,int,int);
char toggle(char);
int main()
{
	char list[4]={'t','t','t','t'};
	int i=0,n;
	clrscr();
	printf("Enter the value for 'n':");
	scanf("%d",&n);
	comb(list,i-1,n-1);
	getch();
}
void comb(char *list,int i,int n)
{
	int j,k;
	if(i==n)
	{
		for(j=0;j<=n;j++)
		printf("%c",list[j]);
		printf("  ");
	}
	else
	{
		for(k=0;k<=1;k++)
		{
			comb(list,i+1,n);
			list[i+1]=toggle(list[i+1]);
		}
	}
}
char toggle(char c)
{
	if(c=='t')
	return 'f';
	else
	return 't';
}*

//question 8
int main()
{
	char *ch;
	int l=0,i,f=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l-1>=0)
	{
		if(*ch>=97&&*ch<=122)
		*ch=*ch-32;
		ch--;
		l--;
	}
	ch++;
	printf("\n\n\tstring in upper case = %s",ch);
	getch();
}*

//question 7
int main()
{
	char n[10];
	int i,j,k,m;
	clrscr();
	printf("\n\n PLEASE ENTER THE VALUE OF N: ");
	scanf("%s",n);
	for(i=0,j=0;n[i]!='.';i++)
	j++;
	for(i=0,k=0;n[i]!='\0';i++)
	k++;
	k--;
	for(i=k;i>j+2;i--)
	{
	    if(n[i]<'5')
	    n[i]='\0';
	    if(n[i]>='5')
	    {
		n[i-1]=n[i-1]+1;
		n[i]='\0';
	    }
	}
	printf("\n\n AFTER ROUND OF N %s",n);
}*

//question 35
int main()
{
	char *ch;
	int l=0,i,f=0,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch=='e')
		c++;
		ch--;
		l--;
	}
	ch++;
	printf("The number 'e' is : %d",c);
	getch();
}*

//question 36
int main()
{
	char *ch;
	int l=0,i,f=0,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch=='t')
		{
			ch--;
			if(*ch=='i')
			c++;
		}
		ch--;
		l--;
	}
	ch++;
	printf("The number 'it' is : %d",c);
	getch();
}*

//question 37
int main()
{
	char *ch;
	int l=0,i,f=0,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch=='s')
		{
			ch--;
			if(*ch==' ')
			c++;
			ch++;
		}
		ch--;
		l--;
	}
	ch++;
	printf("The number of words starting with 's' is : %d",c);
	getch();
}*

//question 4
int fact(int);
int power(int,int);
int main()
{
	int a,b,x,i,c=1;
	float sum=0.0;
	clrscr();
	printf("Enter the value of x : ");
	scanf("%d",&a);
	printf("Enter the value of n : ");
	scanf("%d",&b);
	for(i=1;i<=b;i=i+2)
	{
		if(c%2==0)
		{
			x=power(a,i);
			sum=sum-(float)x/fact(i);
		}
		else
		{
			x=power(a,i);
			sum=sum+(float)x/fact(i);
		}
		c++;
	}
	printf("The sum is : %f",sum+1);
	getch();
}
int fact(int y)
{
	int ret=1;
	if(y==0)
	return 1;
	else
	{
		while(y>0)
		{
			ret=ret*y;
			y--;
		}
		return ret;
	}
}
int power(int f, int c)
{
	int p=1,j;
	for(j=1;j<=c;j++)
	p*=f;
	return p;
}*

//question 5
int fact(int);
int power(int,int);
int main()
{
	int a,b,x,i,c=1;
	float sum=0.0;
	clrscr();
	printf("Enter the value of x : ");
	scanf("%d",&a);
	printf("Enter the value of n : ");
	scanf("%d",&b);
	for(i=0;i<=b;i=i+2)
	{
		if(c%2==0)
		{
			x=power(a,i);
			sum=sum-(float)x/fact(i);
		}
		else
		{
			x=power(a,i);
			sum=sum+(float)x/fact(i);
		}
		c++;
	}
	printf("The sum is : %f",sum+1);
	getch();
}
int fact(int y)
{
	int ret=1;
	if(y==0)
	return 1;
	else
	{
		while(y>0)
		{
			ret=ret*y;
			y--;
		}
		return ret;
	}
}
int power(int f, int c)
{
	int p=1,j;
	for(j=1;j<=c;j++)
	p*=f;
	return p;
}*

//question 14
int main()
{
	char *ch;
	int l=0,i,f=0,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch=='e')
		{
			ch--;
			if(*ch=='h')
			{
				ch--;
				if(*ch=='t')
				c++;
			}
		}
		ch--;
		l--;
	}
	ch++;
	printf("The number 'the' is : %d",c);
	getch();
}*

//question 12
int main()
{
	char *ch;
	int l=0,i,f=0,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch==' ')
		{
			*ch='-';
			c++;
		}
		ch--;
		l--;
	}
	ch++;
	ch++;
	printf("The number spaces replaced is : %d",c);
	getch();
	printf("\n\nThe string is : \n%s",ch);
	getch();
}*

//question 34
int main()
{
	char *ch;
	int l=0,i,f=0,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch==' ')
		{
			*ch='_';
			c++;
		}
		ch--;
		l--;
	}
	ch++;
	ch++;
	printf("The number spaces replaced is : %d",c);
	getch();
	printf("\n\nThe string is : \n%s",ch);
	getch();
}*

//question 28
#define max(a,b) ((a>b)?a:b)
#define maxthree(a,b,c) (max(max(a,b),c))
int main()
{
	int x,y,z,w;
	clrscr();
	printf("enter three numbers :\n");
	scanf("%d%d%d",&x,&y,&w);
	z=maxthree(x,y,w);
	printf("Maximum of three value is %d",z);
	getch();
}*

//question 30
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
}*

//question 18
int main(int a,int b)
{
	int sum;
	sum=a+b;
	printf("The sum is : %d",sum);
	getch();
}*

//question 11
int main()
{
	int *p,i,n;
	printf("Enter limit of array : ");
	scanf("%d",&n);
	printf("Enter array : ");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	printf("The array is : ");
	for(i=0;i<n;i++)
	printf("%d",*(p+i));
	getch();
}*

//question 32
int main()
{
	char *ch,a,b;
	int l=0,i,f=0,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	scanf("%c",b);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	printf("Enter a character to be removed : ");
	scanf("%c",&a);
	for(i=0;i<l;i++)
	ch--;
	ch++;
	while(l>0)
	{
		if(*ch==(char)a)
		{
			ch++;
		}
		printf("%c",*ch);
		l--;
		ch++;
	}
	getch();
}*

//question 16 cpp
class division
{
	int a,b;
	public:
	void get()
	{
		printf("Enter two numbers : ");
		scanf("%d%d",&a,&b);
	}
	void div()
	{
		printf("The division is : %f",(float)(a/b));
	}
	void check()
	{
		if(b==0)
		{
			printf("Input is zero ");
			printf("Enter again : ");
			scanf("%d",b);
		}
	}
}a;
int main()
{
	clrscr();
	a.get();
	a.check();
	a.div();
	getch();
}*

//question 27
void main()
{
    int t,i,j,k;
    int a[10]={10,3,5,2,1,7,4,9,6,8};
    clrscr();
    for(i=0;i<10;i++)
    {
	for(j=i+1;j<10;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
    }
    printf("enter the value of k:");
    scanf("%d",&k);
    printf("\n%d greatest number is: %d",k,a[k-1]);
    getch();
}*

//question 17 cpp
class telephone
{
	char name[30];
	char address[50];
	double tno;
	public :
	void input()
	{
		cout<<"\n Enter the name ";
		gets(name);
		cout << "\n Enter address ";
		gets(address);
		cout<<"\n Enter the telephone number ";
		cin>>tno;
	}
	void show()
	{
		cout << "\n Name "<<name;
		cout << "\n Address "<<address;
	}
	double rt_tno()
	{
		return tno;
	}
}tele;
void append()
{
	ofstream  tfile;
	telephone tele;
	tfile.open("tele.dat", ios :: app);
	int  n,i;
	cout<< "Enter how many customers ";
	cin>>n;
	for (i =0; i<n ;i++)
	{
		tele.input();
		tfile.write((char *)& tele,sizeof(tele));
	}
	tfile.close();
}
void display()
{
	ifstream tfile;
	tfile.open("tele.dat",ios :: binary);
	int no,flag;
	flag = 0;
	cout<< "\n Enter telephone number to be searched ";
	cin>>no;
	while(tfile)
	{
		tfile.read((char *)&tele , sizeof(tele));
		if(!tfile)
			break;
		if (tele.rt_tno() == no)
		{
			tele.show();
			flag = 1;
		}
	}
	if (flag == 0)
		cout<< "\n Record does not exist ";
}
void main()
{
	clrscr();
	int ch;
	cout << " 1. For append record ";
	cout <<"\n 2. For search ";
	cout << "\n 3. For exit";
	cin >> ch;
	switch (ch)
	{
		case 1:	append();
			break;
		case 2:	display();
			break;
		case 3 : exit(0);
	}
}*

//question 13 cpp
class vector
{
	int a,b,c;
	public:
	void getdata()
	{
		printf("Enter vector a,b,c : ");
		scanf("%d%d%d",&a,&b,&c);
	}
	void change()
	{
		printf("\n\nEnter vector again a,b,c : ");
		scanf("%d%d%d",&a,&b,&c);
	}
	void display()
	{
		printf("\n\nThe entered vector is : ");
		printf("%di+%dj+%dk",a,b,c);
	}
}a;
int main()
{
	char ch;
	clrscr();
	a.getdata();
	printf("Do you want to change (Y/N): ");
	ch=getch();
	if(ch=='y'||ch=='Y')
	a.change();
	a.display();
	getch();
}*


//question 29
int main()
{
	int a[10][10],i,j,k,n,min,max,col,m;
	clrscr();
	printf("enter order m,n of mxn matrix");
	scanf("%d %d",&m,&n);
	printf("enter elements row-wise");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]<=min)
			{
				min=a[i][j];
				col=j;
			}
		}
		max=a[0][col];
		for(k=0;k<m;k++)
		{
			if(a[k][col]>=max)
			{
				max=a[k][col];
			}
		}
		if(max==min)
		printf("saddle pt.at (%d,%d)",i+1,col+1);
	}
	getch();
}*/

//question 22
int fact(int); 
void main() 
{ 
	int n,r,f; 
	printf("enter value for n & r\n");	 
	scanf("%d%d",&n,&r); 
	if(n<r) 
	printf("invalid input"); 
	else 
	f=fact(n)/(fact(n-r)*fact(r)); 
	printf("binomial coefficient=%d",f); 
} 
int fact(int x) 
{ 
	if(x>1) 
	return x*fact(x-1); 
	else 
	return 1; 
}

void ques17()
{
	fstream file,file1;
	file.open("text.txt",ios::in);
	file1.open("text1.txt",ios::out);
	char ch[100];
	int a=0,n,z,x,i;
	printf("Enter the last lines to be printed : ");
	scanf("%d",&n);
	while(file)
	{
		file.getline(ch,100,'.');
		a++;
		if(file.eof())
		break;
	}
	z=a-n;
	while(file)
	{
		file.getline(ch,100,'.');
		z--;
		if(z==0)
		break;
	}
	while(file)
	{
		file.getline(ch,100,'.');
		x=strlen(ch);
		for(i=0;i<x;i++)
		file1.put(ch[i]);
		if(file.eof())
		break;
	}
	getch();
}
void ques25()
{
	int a,i,z,x[20]={0},bi,nul,j=0,ro;
	char ch[20],ch11;
	clrscr();
	printf("Enter the total elements : ");
	scanf("%d",&a);
	printf("enter the elements : ");
	scanf("%c",&ch11);
	for(i=0;i<a;i++)
	cin>>ch[i];
	z=pow(2,a);
	z=z-1;
	for(i=0;i<=z;i++)
	{
		if(i==0)
		printf("\nEmpty Set");
		nul=i;
		j=0;
		while(nul>0)
		{
			x[j]=nul%2;
			nul=nul/2;
			j++;
		}
		for(ro=0;ro<j;ro++)
		{
			if(x[ro]==1)
			cout<<ch[ro];
		}
		cout<<"\n";
	}
	getch();
}
void ques31()
{
	char t,str1[20], str2[20], str3[20],str4[20];
	int d=0,i,c=0,len1,len2,y,z,x,j,len3,len4;
	str4[0]='\0';
	clrscr();
	printf("Enter the string: \n");
	gets(str1);
	printf("Enter the string to be found: \n");
	gets(str2);
	d=strlen(str2);
	printf("Enter the string to be inserted if above sring is found: \n");
	gets(str3);
	if(strstr(str1,str2)==NULL)
	{
		printf("String does not lies");
		exit(0);
	}
	else
	{
		printf("It lies in string\n");
	}
	len1=strlen(str1);
	len2=strlen(str2);
	len3=strlen(str3);
	for(i=0;i<(len1-len2+1);i++)
	{
		c=1;
		for(j=0;j<len2;j++)
		if(str1[i+j]!=str2[j])
		{
			c=0;
			break;
		}
		if(c)
		break;
	}
	strncat(str4,str1,i);
	strcat(str4,str3);
	y=len1+len3-len2;
	x=i+len3;
	z=i+len2;
	for(j=x;j<=y;j++)
	{
		str4[j]=str1[z];
		z++;
	}
	printf("New string: ");
	for(j=0;j<=y;j++)
	{
		printf("%c",str4[j]);
	}  for(i=0;str2[i]!='\0';i++)
	{
	t=str2[0];
	}
	cout<<"\nNo. of letters in to be changed strings: "<<d;
	cout<<"\nStarting letter: "<<t;
	getch();
}

void ques40()
{
	clrscr();
	fstream  file,file1;
	file.open("text.txt", ios :: in);
	file1.open("text1.txt",ios::out);
	char ch;
	while(file)
	{
		file.read((char *)&ch , sizeof(ch));
		if(!file)
			break;
		if (ch == ' ')
		{
			file1.write((char *)&ch,sizeof(ch));
			file.read((char *)&ch , sizeof(ch));
			if(ch==' ')
			file.read((char *)&ch , sizeof(ch));
		}
		file1.write((char *)&ch,sizeof(ch));
	}
	file.close();
	file1.close();
	getch();
}

void ques38()
{
	char city[10][15];
	int i;
	clrscr();
	printf("enter the name of the cities:");
	for(i=0;i<10;i++)
	scanf("%s",&city[i]);
	for(i=0;i<10;i++)
	{
		if(city[i][0]=='b'||city[i][0]=='c'||city[i][0]=='B'||city[i][0]=='C')
		printf("\n%s",city[i]);
	}
	getch();
}

void ques39()
{
	int i,j,k;
	clrscr();
	printf("\n");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=31-i;j++)
		printf(" ");
		for(j=i,k=(2*i-1)/2+1;k;j++,k--)
		{
			if(j==10)
			j=0;
			printf("%d",j);
		}
		for(j-=2,k=(2*i-1)/2;k;j--,k--)
		{
			if(j==-1)
			j=9;
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}

class account
{

public:
char cus_nam;
long int ac_no;
char ac_type;
};

class sav_acct : public account
{
public:
int depst;
long float cur_bal;
int wthdr_amt;
sav_acct()
{
cur_bal=10000;
}
};


class cur_acct : public account
{
public:
int depst;
long float cur_bal;
int wthdr_amt;
int min;
cur_acct()
{
min=5000;
cur_bal=20000;
}
};


void ques21cpp()
{
account a;
sav_acct s;
cur_acct c;
int ch,m,n;
clrscr();
cout<<"Enter account type:\n1. Saving account\n2. Current account\n\tEnter choice: ";
cin>>ch;
switch(ch)
{
case 1:

cout<<"Enter the account no.\n";
cin>>s.ac_no;
cout<<"Enter the account holders name: \n";
cin>>s.cus_nam;
cout<<"Available Balance: "<<s.cur_bal;
x:
clrscr();
cout<<"\n 1. Withdraw\n 2. Deposit\n \t Enter choice: ";
cin>>m;
if(m==1)
{
cout<<"Enter amount: ";
cin>>s.wthdr_amt;
s.cur_bal=(s.cur_bal)-(s.wthdr_amt);
cout<<"The available balance = Rs."<<s.cur_bal;
}

else if(m==2)
{
cout<<"Enter amount: ";
cin>>s.depst;
s.cur_bal=(s.cur_bal)+(s.depst);
cout<<"The available balance = Rs."<<s.cur_bal;
s.cur_bal=s.cur_bal*1.08;
cout<<"Balance after 0.8% interest= Rs."<<s.cur_bal;
}
else
{
cout<<"Wrong Choice.";
goto x;
}
break;

case 2:

int q,y,p;
cout<<"Enter the account no.\n";
cin>>c.ac_no;
cout<<"Enter the account holders name: \n";
cin>>c.cus_nam;
cout<<"Available Balance: "<<c.cur_bal;
y:
clrscr();
cout<<"\n 1. Withdraw\n 2. Deposit\n \t Enter choice: ";
cin>>q;
if(q==1)
{
 cout<<"Enter amount";
 cin>>c.wthdr_amt;
 c.cur_bal=(c.cur_bal)-(c.wthdr_amt);
 cout<<"The available balance = Rs."<<c.cur_bal;
}
else if(q==2)
{
 cout<<" 1.By cheque\n 2.By cash\t Enter choice";
   if(p==1)
  {
   cout<<"Enter the name of issuing bank\nEnter the amount:";
   cin>>c.depst;
   c.cur_bal=c.cur_bal+c.depst;
   cout<<"The available balance = Rs."<<c.cur_bal;
  }
 else if(p==2)
  {

   cout<<"Enter the amount:";
   cin>>c.depst;
   c.cur_bal=c.cur_bal+c.depst;
   cout<<"The available balance = Rs."<<c.cur_bal;
  }
else
{
cout<<"Wrong choice";
goto y;
}
break;
}
}
getch();
}

class DM
{
	public:
	int metre,cm;
};
class DB : public DM
{
	public:
	int feet,inch;
	void getdata()
	{
		cout<<"Enter in metre : ";
		cin>>metre;
	}
	void centimeter()
	{
		cout<<"\nIn centimeter : "<<metre*100;
	}
	void feetr()
	{
		cout<<"\nIn feet : "<<metre*0.3;
	}
	void inchesr()
	{
		cout<<"\nIn inch : "<<metre*0.3*12;
	}
}j;
void ques14cpp()
{
	clrscr();
	int a;
	j.getdata();
	cout<<"Enter your choice : ";
	y:
	cout<<"\n1. In centimeter\n2. In feet\n3. In Inches";
	cin>>a;
	switch(a)
	{
		case 1:
		j.centimeter();
		break;
		case 2:
		j.feetr();
		break;
		case 3:
		j.inchesr();
		break;
		default:
		cout<<"Wrong Input";
		goto y;
	}
	getch();
}

class shape
{
	public:
	int a,b,s,r;
	void get_data()
	{
		cout<<"Enter the 2 sides:";
		cin>>a>>b;
		cout<<"Enter radius : ";
		cin>>r;
	}
}m;
class triangle : public shape
{
	public:
	void display_area()
	{
		s=0.5*a*b;
		cout<<"Area of triangle: "<<s;
	}
}e;
class rectangl : public shape
{
	public:
	void display_area()
	{
		s=a*b;
		cout<<"Area of rectangle: "<<s;
	}
}f;
class circle : public shape
{
	public:
	void display_area()
	{
		s=r*r*3.14;
		cout<<"Area of circle is : "<<s;
	}
}g;
void ques18cpp()
{
	shape m;
	triangle e;
	rectangl f;
	int ch;
	clrscr();
	x:
	cout<<"\n1. Area of rectangle.\n2. Area of triangle.\n3. Area of circle\n\tEnter choice.:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		f.get_data();
		f.display_area();
		break;
		case 2:
		e.get_data();
		e.display_area();
		break;
		case 3:
		g.get_data();
		g.display_area();
		break;
		default:
		{
			cout<<"Wrong choice";
			goto x;
		}
	}
	getch();
}

class cpparray
{
	int a[20],n,i;
	public:
	void getdata()
	{
		cout<<"Enter the number of elements : ";
		cin>>n;
		cout<<"Now enter the elements : ";
		for(i=0;i<n;i++)
		cin>>a[i];
	}
	void disp()
	{
		cout<<"The Entered elements are : ";
		for(i=0;i<n;i++)
		cout<<a[i];
	}
	void range()
	{
		cout<<"\n\nThe range of array is : ";
		cout<<n;
	}
}z;
void ques6cpp()
{
	clrscr();
	z.getdata();
	z.disp();
	z.range();
	getch();
}

//question 4cpp
class complex
{
	int a1,a2,b1,b2,a,b;
	public:
	void getdata()
	{
		printf("Enter two complex number : ");
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
	}
	complex()
	{
		a1=0;
		a2=0;
		b1=0;
		b2=0;
	}
	void add()
	{
		a=a1+b1;
		b=b1+b2;
		printf("The sum of complex numbers is : %d+%di",a,b);
	}
	void multiply()
	{
		a=a1*a2-b1*b2;
		b=a1*b2+a2*b1;
		printf("The multiplication of complex number is : %d+%di",a,b);
	}
}y;
void ques4cpp()
{
	y.getdata();
	y.add();
	y.multiply();
	getch();
}

class rectangle
{
	int l1,l2,b1,b2,a1,a2;
	public:
	void getdata()
	{
		printf("Enter length and breadth of rectangle one : ");
		scanf("%d%d",&l1,&b1);
		printf("Enter length and breadth of rectangle two : ");
		scanf("%d%d",&l2,&b2);
	}
	void comp()
	{
		a1=l1*b1;
		a2=l2*b2;
		if(a1>a2)
		printf("Area of 1st is bigger than second ");
		else
		printf("Area of second is bigger than first ");
	}
}s;
void ques3cpp()
{
	clrscr();
	s.getdata();
	s.comp();
	getch();
}