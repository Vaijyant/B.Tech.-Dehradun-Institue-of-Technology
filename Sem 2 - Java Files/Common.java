//Program 11:
package MyPackage;
class A
{
	public static void display()
	{
		System.out.println("I am from class A");
	}
}
class B
{
	public static void display()
	{
		System.out.println("I am from class B");
	}
}
class C 
{
	public static void display()
	{
		System.out.println("I am from class C");
	}
}
class Common
{

	public static void main(String args[])
	{
		A a = new A();
		B b = new B();
		C c = new C();
		a.display();
		b.display();
		c.display();
		System.out.println("I am from class Common");
	}
}