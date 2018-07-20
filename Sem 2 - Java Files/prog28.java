import java.io.*;
class prog28
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter length & breadth");
	    int a=Integer.parseInt(y.readLine());
	    int b=Integer.parseInt(y.readLine());
	    System.out.println("  1.Area  2.Perimeter  3.Diagonal");
	    System.out.println("Enter your choice");
	    int ch=Integer.parseInt(y.readLine());
	    switch(ch)
        {
	        case 1:
	        System.out.println("The area = "+(a*b));
	        break;
	        case 2:
	        System.out.println("The perimeter = "+(2*(a+b)));
	        break;
	        case 3:
	        System.out.println("The diagonal = "+(Math.sqrt(a*a+b*b)));
	        break;
	        default:
	        System.out.println("Invalid option");
	    }
    }
}
