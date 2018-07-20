import java.io.*;
class prog29
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("1.V, 2.I, 3.B, 4.G, 5.Y, 6.O, 7.R,");
	    System.out.println("Enter choice");
	    int ch=Integer.parseInt(y.readLine());
	    switch(ch)
	    {
	        case 1:
	        System.out.println("The colour of the VIBGYOR is Violet");
	        break;
	        case 2:
	        System.out.println("The colour of the VIBGYOR is Indigo");
	        break;
	        case 3:
	        System.out.println("The colour of the VIBGYOR is Blue");
	        break;
	        case 4:
	        System.out.println("The colour of the VIBGYOR is Green");
	        break;
	        case 5:
	        System.out.println("The colour of the VIBGYOR is Yellow");
	        break;
	        case 6:
	        System.out.println("The colour of the VIBGYOR is Orange");
	        break;
	        case 7:
	        System.out.println("The colour of the VIBGYOR is Red");
	        break;
	        default:
	        System.out.println("Invalid option");
        }
    }
}