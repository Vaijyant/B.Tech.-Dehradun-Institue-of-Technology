class ThreadA extends Thread
{
	public void run()
	{
		for(int a=1; a<=5; a++)
			System.out.println("a = "+a);
	}	
}
