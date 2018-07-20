import java.io.*;
class prog11
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("enter perpendicular & base");
	    float p=Float.parseFloat(y.readLine());
	    float b=Float.parseFloat(y.readLine());
	    float h=(float)Math.sqrt(p*p+b*b);
	    float ar=(float).5*p*b;
	    System.out.println("Hpotenuse="+h);
	    System.out.println("Area="+ar);
    }
}

	    
