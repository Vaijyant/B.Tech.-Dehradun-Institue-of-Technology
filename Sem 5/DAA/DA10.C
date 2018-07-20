#include<stdio.h>
#include<conio.h>
int n,i,j,k,t,m;
int selection(int s[],int p);
void main()
{
     int slot[50],d[50],p[50];
     int penalty;
     clrscr();
     printf("enter the no of jobs: ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
       {
       printf("\nenter the penalty of job %d:",i+1);
       scanf("%d",&p[i]);
       printf("\nenter the deadline of job %d:",i+1);
       scanf("%d",&d[i]);
       }

     for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	 if(p[i]<p[j])
	    { t=p[i];
	      p[i]=p[j];
	      p[j]=t;
	      t=d[i];
	      d[i]=d[j];
	      d[j]=t;
	    }

       for(i=0;i<n;i++)
	   slot[m]=0;

     for(i=0;i<n;i++)
	 for(j=d[i];j>0;j--)
	     {
	     if(selection(slot,j)==1)
		{
		slot[m]=j;
		break;
		}
	     }

     printf("\n\n INDEX   PENALTY  DEADLINE  SLOT ALLOTED ");
     for(i=0;i<n;i++)
     {
     if(slot[i]>0)
     printf("\n\n   %d       %d        %d        [%d - %d]", i+1,p[i],d[i],(slot[i]-1),slot[i]);
     else
     printf("\n\n   %d       %d        %d       REJECTED", i+1,p[i],d[i]);
     }

       getch();
}
int selection(int s[],int p)
       {
       int abc=0,i;
	   for( i=0;i<n;i++)
	   {
	   if(s[i]==p)
	       abc++;
	   }
	    if(abc==0)
	    return 1;
	    else
	    return 0;
	}

