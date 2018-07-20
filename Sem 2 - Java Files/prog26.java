import java.io.*;
class prog26
{
	public static void main (String args[])throws IOException
    {
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter two numbers");
	    int a = Integer.parseInt(y.readLine());
	    int b = Integer.parseInt(y.readLine());
	    System.out.println("1. Add");
	    System.out.println("2. Subtract");
	    System.out.println("3. Multiply");
	    System.out.println("Enter Choice");
	    int ch=Integer.parseInt(y.readLine());
	    switch(ch)
	    {
	        case 1:
	        System.out.println("Sum of two numbers is "+(a+b));
	        break;
	        case 2:
	        System.out.println("Difference of two numbers is "+(a-b));
	        break;
	        case 3:
	        System.out.println("Product of two numbers is "+(a*b));
	        break;
	        default:
	        System.out.println("Invalid option");
	    }
    }
}
