class EvenOdd
{
	public static void main(String args[])
	{
		int arr[] = {50, 65, 56, 70, 91};
		System.out.println("Array elements are:");
		for(int i=0 ; i<arr.length; i++)
		{
			System.out.println(arr[i]);
		}
		System.out.println("*********");
		for(int i=0 ; i<arr.length; i++)
		{
			if(arr[i]%2 == 0)
			{
				System.out.println(arr[i]+" is Even.");
			}
			else
			{
				System.out.println(arr[i]+" is Odd.");
			}
		}
	}
}