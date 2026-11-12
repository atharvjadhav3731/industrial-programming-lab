import java.util.Scanner;

class Digit
{
    public int SumDigits(int ino)
    {
        int iSum = 0;

        if(ino < 0)
        {
            ino = -ino;
        }
        while(ino != 0)
        {
            iSum = iSum + (ino % 10);
            ino = ino / 10;
        }
       return  iSum;
    }
}

class SumDigitsInlineAccumulator
{
    public static void main(String[] args) 
    {
        int iret = 0;
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number :");
        int iValue = scanner.nextInt();
        
        iret = digit.SumDigits(iValue);   
        System.out.println("Summation of Digit :"+iret);
    }
}
