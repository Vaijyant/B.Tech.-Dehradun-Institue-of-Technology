#include<iostream.h>
#include<conio.h>
struct task
{
int deadl;
int cost;
}task[20],temp;
void main()
{
int i,j,n,p[20],count=0,c=0,ans[20],ex[10],penalty=0,temp1=1,x=0;
clrscr();
cout<<"enter the number of tasks";
cin>>n;
cout<<"\n enter deadline and cost of each task\n";
cout<<"dead line   cost\n";
for(i=0;i<n;i++)
{
cin>>task[i].deadl>>task[i].cost;
p[i]=-1;
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(task[i].cost<task[j].cost)
{
temp=task[i];
task[i]=task[j];
task[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(p[task[i].deadl]==-1)
{
p[task[i].deadl]=0;
ans[count++]=i;
}
else
{
c=task[i].deadl;
temp1=1;
while(c>0)
{
if(p[c]==-1)
{
temp1=0;
p[c]=0;
ans[count++]=i;
break;
}
c--;
}
if(temp1==1)
{
ex[x++]=i;
penalty=penalty+task[i].cost;
}
}
}
for(i=0;i<count;i++)
{
for(j=i+1;j<count;j++)
{
if(task[ans[i]].deadl>=task[ans[j]].deadl)
{
temp1=ans[i];
ans[i]=ans[j];
ans[j]=temp1;
}
}
}
cout<<"\n the scheduled tasks are\n ";
for(i=0;i<count;i++)
cout<<"T"<<ans[i]+1;
for(i=0;i<x;i++)
cout<<"T"<<ex[i]+1;
cout<<"\n\n total penalty is";
cout<<penalty;
getch();
}