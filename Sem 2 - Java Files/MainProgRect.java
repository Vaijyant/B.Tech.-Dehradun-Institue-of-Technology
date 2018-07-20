//Program13: To implement a parameterized constructor
class Rectangle
{
	int length, width, area;
	Rectangle(int x, int y)	
	{
		System.out.println("\nConstructor Rectangle invoked!\n");
		length = x; 
		width = y;	
	}
	int Area()
	{
		area = length*width;
		return area;
	}

}
class MainProgRect
{
	public static void main (String args[])
	{
		int l =Integer.parseInt(args[0]), w = Integer.parseInt(args[1]);
		Rectangle rect = new Rectangle(l, w);
		int result = rect.Area();
		System.out.println("Area = "+result);
	}
}
