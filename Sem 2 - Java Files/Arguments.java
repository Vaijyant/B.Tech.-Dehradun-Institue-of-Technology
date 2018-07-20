class Arguments
{
	public static void main (String args[])
	{
		int i = 0;
		while(i<args.length)
		{
			System.out.println(args[i]);
			i++;
		
		}
		System.out.println("No of arguments passed = "+i);
	}
}