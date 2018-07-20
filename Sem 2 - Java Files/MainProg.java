class Area
{
	float area;
	Area(int l, int b)
	{
		area = l*b;
	}
	Area(float r)
	{
		area = (float)3.14*r*r;
	}
	Area(int s)
	{
		area = s*s;
	}
	void display()
	{
		System.out.println(area);
	}
}

class MainProg
{
	public static void main(String args[])
	{
		Area rec = new Area(20, 30);
		Area circ = new Area((float)22.1);
		Area sq = new Area(10);

		System.out.println("Area of Rectangle is "); rec.display();
		System.out.println("\nArea of circle is "); circ.display();
		System.out.println("\nArea of square is "); sq.display();
	}
}