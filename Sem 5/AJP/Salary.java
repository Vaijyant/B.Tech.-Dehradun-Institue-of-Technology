import java.util.*;
class Salary
{
	public static void main (String[] args)
	{
		int bs;
		float da, hra, gs, ns, it;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter basic salary");
		bs = in.nextInt();
		da = 0.1f*bs;
		hra = 0.07f*bs;
		gs = bs + da +hra;
		it = 0.08f*gs;
		ns = gs-it;
		System.out.println("\nDearness allownace: "+da);
		System.out.println("House rental allowance: "+hra);
		System.out.println("Gross Salary: "+gs);
		System.out.println("Income tax: "+it);
		System.out.println("Net salary: "+ns);
	}
}