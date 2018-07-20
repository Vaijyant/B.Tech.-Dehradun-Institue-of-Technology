class RectanglePlusMain
{
	public static void main (String args[])
	{
		RectanglePlus rp1 = new RectanglePlus();
		int area = rp1.getArea();
				System.out.println("Area = "+area);

		RectanglePlus rp2 = new RectanglePlus(new Point (20, 30));
		area = rp2.getArea();
		System.out.println("Area = "+area);

		RectanglePlus rp3 = new RectanglePlus(20, 10);
		area = rp3.getArea();
		System.out.println("Area = "+area);

		RectanglePlus rp4 = new RectanglePlus(new Point(20, 30), 20, 10);
		area = rp4.getArea();
		System.out.println("Area = "+area);

		//Relatable

		System.out.println(rp1.isLargerThan(rp2));
		System.out.println(rp2.isLargerThan(rp3));
		System.out.println(rp3.isLargerThan(rp4));
		System.out.println(rp4.isLargerThan(rp1));


	}
}