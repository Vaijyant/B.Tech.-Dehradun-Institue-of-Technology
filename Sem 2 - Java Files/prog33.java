import java.io.*;
class prog33
{
	public static void main(String args[])throws IOException
    {
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    int i,n=1;
	    while(n!=0)
	    {
	        System.out.println("Enter the no.(To end program enter 0)");
	        n=Integer.parseInt(y.readLine());
	        if(n==0)
	        break;
	        if(n%2==0)
	        System.out.println(n+" is even no.");
	        else
	        System.out.println(n+" is odd no.");
        }
    }
}
	    