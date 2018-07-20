import java.io.*;
class prog24
{
	public static void main (String args[])throws IOException
	{
	    float a,b,c;
	    double d,r1,r2;
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter the value of a,b,c");
	    a = Integer.parseInt(y.readLine());
	    b = Integer.parseInt(y.readLine());
	    c = Integer.parseInt(y.readLine());
	    d=Math.sqrt(b*b-4*a*c);
	    if(d>0||(d==0))
	    {
	        r1=(-b+d)/(2*a);
	        r2=(-b-d)/(2*a);
	        System.out.println("Roots are "+r1+" and "+r2);
	     }
	     else
	     {
	         System.out.println("Roots imaginary & unequal");
         }
    }
        
}