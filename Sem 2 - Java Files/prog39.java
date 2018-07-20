class prog39
{
	public static void main (String args[])
	{
	    int i,a=2;
	    double s=1;
	    for(i=1;i<=10;i++)
	    {
	        s=s+Math.pow(a,i);
	    }
	    System.out.println("Sum of 1+a+(a*a)...+(a^10)="+s);  
    }
}