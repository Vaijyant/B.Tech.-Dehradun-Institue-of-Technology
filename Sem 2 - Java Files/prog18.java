import java.io.*;
class prog18
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter three sides of triangle");
	    int a=Integer.parseInt(y.readLine());
	    int b=Integer.parseInt(y.readLine());
	    int c=Integer.parseInt(y.readLine());
	    if((a==b)&&(b==c))
	    System.out.println("Equilateral Triangle");
	    else if((a==b)||(b==c)||(c==a))
	    System.out.println("Isoceles Triangle");
	    else if((a==b)&&(b==c)&&(c==a))
	    System.out.println("Scalene Triangle");
    }
}