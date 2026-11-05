import java.util.Scanner;

class Iteration
{
    public void display(int ino)
    {
        int iCnt =0;
        
       
        for(iCnt = 1 ;  iCnt <=ino; iCnt++)
        {
            System.out.println("---------------");
            System.out.println("Jay Ganesh ...");
            System.out.println("---------------");
        }
    }
}
class ForLoopBannerDelimiter
{
       public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0 ;

        Iteration iteration = new Iteration();

        System.out.println("Enter the Frequency :" );
        iValue = scanner.nextInt();

        iteration.display(iValue);

    }
}


