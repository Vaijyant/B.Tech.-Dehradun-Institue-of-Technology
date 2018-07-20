class Vote
{
	public static void main (String a[])
	{
		if(a.length<2)
		{
			System.out.println("Please enter your name first and then age");
			System.exit(0);
		}
		String name = a[0];
		int age = Integer.parseInt(a[1]);
		if(age<18)
		{
			System.out.println("Sorry "+name+", you are not elligible to vote");
		}
		else
		{
			System.out.println("Welcome "+name+"! You are elligible to vote");
		}
	}
}