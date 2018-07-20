import java.io.*;
class prog13
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter basic Salary ");
	    int basic=Integer.parseInt(y.readLine());
	    double da,hra,pf,npay,gross;
	    da=(basic*25)/100;
	    hra=(basic*15)/100;
	    pf=(basic*8.33)/100;
	    npay=basic+da+hra;
	    gross=npay-pf;
	    System.out.println("net pay="+npay);
	    System.out.println("gross pay="+gross);
    }
}

