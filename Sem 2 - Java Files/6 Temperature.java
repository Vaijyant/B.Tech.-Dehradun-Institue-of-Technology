import java.io.*;
class Temperature
{
	public static void main (String args[])throws IOException
	{
		InputStreamReader x = new InputStreamReader(System.in);
		BufferedReader y = new BufferedReader (x);
		System.out.println("Enter temperature in Fahrenheit:");
		float f = Float.parseFloat(y.readLine());
		float c = (f-32)/(float)1.8;
		System.out.println("Temperature in Celsius: "+c);
	}
}