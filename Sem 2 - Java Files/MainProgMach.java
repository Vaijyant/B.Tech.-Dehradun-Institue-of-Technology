//Program 12: to implement constructor

class Machine
{
	Machine()
	{
		System.out.println("Machine invoked");
	}
}
class MainProgMach
{
	public static void main (String args[])
	{
		for(int i=0; i<10; i++)
		{
			new Machine();//creating an object
		}
	}
}
