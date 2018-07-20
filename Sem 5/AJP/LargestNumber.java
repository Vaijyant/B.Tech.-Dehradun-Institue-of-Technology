
import java.io.*;

public class LargestNumber
{
    public static void main(String[] args)throws IOException
    {
        int a, b, c, max;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter three Number");
        a = Integer.parseInt(br.readLine());
        b = Integer.parseInt(br.readLine());
        c = Integer.parseInt(br.readLine());
        if (a>b && a>c)
            max = a;
        else if (b>c && b>a)
            max = b;
        else
            max = c;
        System.out.println("Largest Number is "+max);
    }

}
