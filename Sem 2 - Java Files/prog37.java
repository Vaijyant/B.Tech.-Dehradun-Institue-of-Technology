import java.io.*;
class prog37
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    int a,n,s;s=0;
	    for(a=1;a<=10;a++)
	    {
	        System.out.println("Enter your no.");
	        n=Integer.parseInt(y.readLine());
	        s=s+n;
        }
        System.out.println("Sum="+s);   
    }
}
	       