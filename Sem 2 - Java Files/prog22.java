import java.io.*;
class prog22
{
	public static void main (String args[])throws IOException
    {
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter the units consumed");
	    int u=Integer.parseInt(y.readLine());
	    float c,a;
	    if(u<=100)
	    {
	        c=(u*80)/100;
	        a=(c+50);
	    }
	    else if((u>100)&&(u<=200))
	    {
	        c=u*1;
	        a=c+50;
	    }
	    else
	    {
	        c=(u*125)/100;
	        a=c+50;
	    }
	    System.out.println("The unit consumed = "+u);
	    System.out.println("The charge = "+c);
	    System.out.println("Yhe additional charge = Rs.50");
	    System.out.println("The amoumt to be paid = Rs."+a);
    }
}
