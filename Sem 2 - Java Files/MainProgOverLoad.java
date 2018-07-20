//Program 14: To implement function overloading
import java.io.*;
class Function
{
	public void area(int side)
	{
		System.out.println("Are of Square= "+(side*side));
	}
	public void area(float radius)
	{
		System.out.println("Are of Circle = "+(3.14*radius*radius));
	}
	public void area(int length, int breadth)
	{
		System.out.println("Are of Rectange= "+(length*breadth));
	}
}
class MainProgOverLoad
{
	public static void main (String args[])throws IOException
	{
		InputStreamReader x = new InputStreamReader(System.in);
		BufferedReader y = new BufferedReader(x);
		Function f = new Function();
		System.out.println("Enter side to calculate area of square");
		int s = Integer.parseInt(y.readLine());
		f.area(s);
		System.out.println("Enter radius to calculate area of circle");
		float r = Float.parseFloat(y.readLine());
		f.area(r);
System.out.println("Enter length and breadth to calculate area of rectangle");
		int l = Integer.parseInt(y.readLine());
		int b = Integer.parseInt(y.readLine());
		f.area(l, b);
	}
}
