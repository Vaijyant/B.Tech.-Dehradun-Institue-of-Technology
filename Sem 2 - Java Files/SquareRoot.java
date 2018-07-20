import java.io.*;
import java.lang.*;
class SquareRoot
{
	public static void main (String args[])throws IOException
	{
		InputStreamReader x = new InputStreamReader(System.in);
		BufferedReader y = new BufferedReader(x);
		int num; double ans;
		System.out.println("Enter a number to evaluate its square root: ");
		num = Integer.parseInt(y.readLine());
		ans= Math.sqrt(num);
		System.out.println("Square root of "+num+" = "+ans);
	}
}