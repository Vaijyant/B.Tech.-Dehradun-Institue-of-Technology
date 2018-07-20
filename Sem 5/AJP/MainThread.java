class MainThread
{
	public static void main(String args[])
	{
		ThreadA at = new ThreadA();
		ThreadB bt = new ThreadB();
		ThreadC ct = new ThreadC();

		at.start();
		bt.start();
		ct.start();
	}
}