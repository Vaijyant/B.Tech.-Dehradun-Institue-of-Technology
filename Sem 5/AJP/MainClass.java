class A
{
	A()
	{
		System.out.println("Class A");
	}
}
class B extends A
{
	B()
	{
		System.out.println("Class B");
	}
}
class C extends B
{
	C()
	{
		System.out.println("Class C");
	}
}
class MainClass
{
	public static void main(String args[])
	{
		System.out.println("\ninstantiating class C");
		new C();
		System.out.println("\ninstantiating class B");
		new B();
		System.out.println("\ninstantiating class A");
		new A();
	}
}