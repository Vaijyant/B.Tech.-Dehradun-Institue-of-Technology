import java.io.*;
class prog19
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter three sides of triangle");
	    int a=Integer.parseInt(y.readLine());
	    int b=Integer.parseInt(y.readLine());
	    int c=Integer.parseInt(y.readLine());
	    if((a+b>c)&&(b+c>a)&&(c+a>b))
	    System.out.println("Triangle is possible");
	    else
	    System.out.println("Triangle is not possible");
    }
}