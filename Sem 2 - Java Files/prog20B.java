import java.io.*;
class prog20B
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter the cost");
	    int c=Integer.parseInt(y.readLine());
	    double pay=0,d=0;
	    if(c<=2000)
	    d=(double)5/100*c;
	    else if((c>2000)&&(c<=5000))
	    d=(double)25/100*c;
	    else if((c>5000)&&(c<=10000))
	    d=(double)35/100*c;
	    else
	    d=(double)50/100*c;
	    pay=c-d;
	    System.out.println("The discount="+d);
	    System.out.println("The amount to be paid="+pay);
    }
}

	    
	    
	    