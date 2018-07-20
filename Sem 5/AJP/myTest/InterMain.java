class InterMain
{
	public static void main (String args[])
	{
		Inter instance = new Inter() {  public String getString(){ return "HI"; } };
		System.out.println(instance.getString());

		instance = new Inter() {
		    public String getString(){ return "HI "+this.getClass(); }};
		System.out.println(instance.getString());

	}
}