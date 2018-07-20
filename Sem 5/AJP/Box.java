import java.io.*;
class Box
{
	public static void rectangle(int l, int b)
	{
		int area = l*b;
		int peri = 2 * (l+b);
		System.out.println("Area of rectangle is "+area+"\nPerimeter of rectangle is "+peri);
	}
	public static void square(int s)
	{
		int area = s*s;
		int peri = 4*s;
		System.out.println("Area of square is "+area+"\nPerimeter of square is "+peri);
	}

	public static void main (String args[])throws IOException
	{
		BufferedReader y = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter sides for rectangle");
		int a = Integer.parseInt(y.readLine());
		int b = Integer.parseInt(y.readLine());
		rectangle(a, b);
		
		System.out.println("\nEnter sides for square");
		int s = Integer.parseInt(y.readLine());
		square(s);		
	}

}