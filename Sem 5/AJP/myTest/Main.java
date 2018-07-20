class Main
{
	public static void main(String args[])
	{
		Test t = new Test();
	}
}
class Test
{
	int i=1;
	Test()
	{
		System.out.print(i+++"-");
		new Test();
	}

	Test(int i)
	{
		System.out.println("I'm here!"+i);
	}
}
