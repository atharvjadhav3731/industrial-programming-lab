import java.util.Scanner;

class Iteration
{
    public void display(int ino)
    {
        int iCnt =0;
        
        // Input Updator 
        if(ino <=0)
        {
            System.out.println("Invalid Input");
            return;
        }
        for(iCnt = 1 ;  iCnt <=ino; iCnt++)
        {
            System.out.println("Jay Ganesh ...");
        }
    }
}
class ForLoopWithInputUpdater
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


