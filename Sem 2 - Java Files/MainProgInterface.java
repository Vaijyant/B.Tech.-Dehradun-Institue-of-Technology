//Program 15: To implement an interface
interface Area
{
	final static float pi = 3.14f;
	float compute (float x, float y);
}
class Circle implements Area
{
	public float compute (float x, float y)
	{
		return(pi*x*x);
	}
}
class Rectangle implements Area
{
	public float compute(float x, float y)
	{
		return (x*y);
	}
}
class MainProgInterface
{
	public static void main (String args[])
	{
		Rectangle Rect = new Rectangle();
		Circle Circ = new Circle();
		Area area;
		area = Rect;
		System.out.println("Area of rectangle = "+area.compute(10, 20));
		area = Circ;
		System.out.println("Area of circle = "+area.compute(10, 0));
	}
}
