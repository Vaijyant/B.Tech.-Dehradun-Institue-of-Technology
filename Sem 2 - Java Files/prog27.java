import java.io.*;
class prog27
{
	public static void main(String args[])throws IOException
    {
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter your Principal");
	    int p=Integer.parseInt(y.readLine());
	    System.out.println("Choices are:    1.Up to six months");
	    System.out.println("\t\t2.More than 6 months & upto 12 monrhs");
	    System.out.println("\t\t3.More than 12 months & upto 36 monrhs");
	    System.out.println("\t\t4.More than 36 months");
	    System.out.println("Enter no. of months");
	    int m=Integer.parseInt(y.readLine());
	    System.out.println("Enter choice"); 
	    int ch=Integer.parseInt(y.readLine());
	    float n=(float)m/12;
	    switch(ch)
        {
	        case 1:
	        System.out.println("Your amountis "+p*(Math.pow(1.07,n)));
	        break;
	        case 2:
	        System.out.println("Your amount is "+p*(Math.pow(1.08,n)));
	        break;
	        case 3:
	        System.out.println("Your amount is "+p*(Math.pow(1.09,n)));
	        break;
	        case 4:
	        System.out.println("Your amount is "+p*(Math.pow(1.1,n)));
	        break;
	        default:
	        System.out.println("Wrong choice");
        }
    }
}