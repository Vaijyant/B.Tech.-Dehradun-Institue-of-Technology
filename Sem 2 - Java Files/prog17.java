import java.io.*;
class prog17
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter your temperature in Celcius");
	    int c=Integer.parseInt(y.readLine());
	    double f=(9*c/5+32);
	    if(f>98.6)
	    System.out.println("Fever");
	    else
	    System.out.println("Normal");
    }
}
