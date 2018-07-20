import java.io.*;
class prog23
{
	public static void main (String args[])throws IOException
	{
	    float a,b,c;
	    double d;
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter value for a,b,c");
	    a = Integer.parseInt(y.readLine());
	    b = Integer.parseInt(y.readLine());
	    c = Integer.parseInt(y.readLine());
	    d=Math.sqrt(b*b-4*a*c);
	    if(d>0)
	    System.out.println("Roots real & unequal");
	    else if(d==0)
	    System.out.println("Roots real & equal");
	    else
	    System.out.println("Roots imaginary & unequal");
    }
}

	    