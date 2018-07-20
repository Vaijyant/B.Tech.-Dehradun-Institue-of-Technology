class SuperClass
{
	public void display()
	{
		System.out.println("Printed from display() of super class");
	}
}
class BaseClass extends SuperClass
{
	public void display()
	{
		System.out.println("printed from display() of base class");
	}
}
class Overriding
{
	public static void main(String args[])
	{
		System.out.println("\nInstatiating BaseClass");
		new BaseClass().display();
		System.out.println("\nInstatiating SuperClass");
		new SuperClass().display();
	}
}