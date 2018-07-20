import java.io.*;
class prog14
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter principal,rate & time");
	    int p=Integer.parseInt(y.readLine());
	    int r=Integer.parseInt(y.readLine());
	    int t=Integer.parseInt(y.readLine());
	    int si=p*r*t/100;
	    System.out.println("Simple Intrest ="+si);
    }
}

	    