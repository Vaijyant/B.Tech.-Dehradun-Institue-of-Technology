/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
import java.io.*;

public class Circle
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader y = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter radius of circle");
        float r = Float.parseFloat(y.readLine());

        float area = (float)3.14*r*r;
        float cir = 2*(float)3.14*r;

        System.out.println("Area = "+area+"\nCircumfrence = "+cir);
    }

}
