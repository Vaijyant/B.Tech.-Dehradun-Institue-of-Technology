class ThreadB extends Thread
{
	public void run()
	{
		for(int b=1; b<=5; b++)
			System.out.println("b = "+b);
	}	
}
