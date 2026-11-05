import java.util.Scanner;

class IterationUsingDoWhileLoop
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
class Iteration
{
    public void display(int ino)
    {
        int iCnt =0;

        iCnt = 1;
        do{
            System.out.println("---------------");
            System.out.println(iCnt + " Jay Ganesh ...");
            System.out.println("---------------");
            iCnt++;
        }while(iCnt <=ino);
    }
}
