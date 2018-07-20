class ThreadC extends Thread
{
	public void run()
	{
		for(int c=1; c<=5; c++)
			System.out.println("c = "+c);
	}	
}
