import java.io.*;

/**
 *
 * @author dit_user
 */
public class LeapYear {

    public static void main(String[] args) throws IOException
    {
        BufferedReader y = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a year to check if it is leap");
        int year = Integer.parseInt(y.readLine());
        if( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {

            System.out.println(year+" is leap year");
        }
        else
        {
            System.out.println(year+" is not Leap Year");
        }
    }

}
