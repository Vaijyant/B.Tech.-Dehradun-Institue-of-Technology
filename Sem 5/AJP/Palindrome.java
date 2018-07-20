
import java.io.*;

public class Palindrome
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException
    {
        BufferedReader y = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a number to check if it is palindrome");
        int n = Integer.parseInt(y.readLine());
        int l, c, r =0;
        c = n;
        while(n != 0)
        {
            l = n%10;
            r = r*10+l;
            n = n/10;
        }
        if (r == c)
            System.out.println(c+" is palindrome");
        else
            System.out.println(c+" is not palindrome");
    }

}
