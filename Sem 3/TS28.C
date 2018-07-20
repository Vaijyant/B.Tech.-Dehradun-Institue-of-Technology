#include<stdio.h>
void main()
{
   int i=1,j=2;
   clrscr();
   switch(i,j)
{
   case 1:  printf("GOOD");
	    break;
   case 2:  printf("BAD");
	    break;
}
}
 //when switch(i) output : good , wn switch(j) output:bad, also wn switch(i,j) output:"bad" ,,,, what is reason behind this/....