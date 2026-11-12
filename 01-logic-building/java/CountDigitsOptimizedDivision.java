import java.util.Scanner;

class Digit
{
    public int CountDigits(int ino)
    {
        int iCount = 0;

        if(ino < 0)
        {
            ino = -ino;
        }
        while(ino != 0)
        {
            ino = ino / 10;
            iCount++;
        }
       return  iCount;
    }
}

class CountDigitsOptimizedDivision
{
    public static void main(String[] args) 
    {
        int iret = 0;
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number :");
        int iValue = scanner.nextInt();
        
        iret = digit.CountDigits(iValue);   
        System.out.println("Number of iDigits :"+iret);
    }
}
