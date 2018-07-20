import java.io.*;
class HarmonicSeries
{
	public static void main (String args[])throws IOException
	{
		InputStreamReader x = new InputStreamReader(System.in);
		BufferedReader y = new BufferedReader(x);
		int n; float ans = 0;
		System.out.println("Enter the value of n for the series:");
		System.out.println("1 + 1/2 + 1/3 + ... + 1/n");
		n = Integer.parseInt(y.readLine());

		for(int i=1; i<=n; i++)
		{
			ans = ans + (float)1/i;
		}
		System.out.println("Sum of the harmonic series is = "+ans);
	}
}