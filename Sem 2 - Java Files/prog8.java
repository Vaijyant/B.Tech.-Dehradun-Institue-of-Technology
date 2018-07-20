class prog8
{
	public static void main (String ar[])
	{
	    int r1=15, r2=10;
	    int l=50000,p=5000;//l & p are original cost of laptop & printer respectively
	    double d1, d2, m=0, n=0;
	    d1=(double)r1/100*l;
	    d2=(double)r2/100*p;
	    m=l-d1;
	    n=p-d2;
	    System.out.println("The price of Laptop after Discount = "+m);
	    System.out.println("The price of Printer after discount = "+n);
    }
}
