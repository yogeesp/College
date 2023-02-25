import java.util.*;
public class sessional_1
{
    public static void main(String[] args) {
        float a, b;
        String choice = "";
        Scanner sc = new Scanner(System.in);
        while(true)
        {
            System.out.print("Enter numerator: ");
            a = sc.nextInt();
            System.out.print("Enter denominator: ");
            b = sc.nextInt();

            try
            {
                float div = (float)a/(float)b;
                System.out.println(div);
            }
            catch(ArithmeticException e)
            {
                System.out.println(e.getMessage());
            }
            finally
            {
                System.out.print("Try again ? (Yes/No) ");
                choice = sc.next();
                if(choice.equals("No"))
                break;
            }
        }
        sc.close();
    }
}
