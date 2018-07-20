import java.io.*;
class prog20A
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter three numbers");
	    int a=Integer.parseInt(y.readLine());
	    int b=Integer.parseInt(y.readLine());
	    int c=Integer.parseInt(y.readLine());
	    if((a>b)&&(a>c))
	    System.out.println(a+" is the greatest number");
	    else if((b>a)&&(b>a))
	    System.out.println(b+" is the greatest number");
	    else if((a>b)&&(a>c))
	    System.out.println(c+" is the greatest number");
    }
	   
}