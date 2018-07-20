
import java.io.*;

public class Strings {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)throws IOException
    {
        BufferedReader y = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter two strings");
        String st1, st2, st3;

        int l;

        st1 = y.readLine();
        st2 = y.readLine();

        st3 = st1 + " "+ st2;
        System.out.println("Concatenated String is "+st3);

        System.out.println("\nEnter string to calculate its length");
        st3 = y.readLine();

       l = st3.length();

       System.out.println("Length of \""+st3+"\" is "+l);

    }

}
