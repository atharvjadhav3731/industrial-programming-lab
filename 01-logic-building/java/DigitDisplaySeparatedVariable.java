import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
        int ino = 9752;
        int iDigit = 0;

        while(ino != 0)
        {
        iDigit = ino % 10;
        ino = ino / 10;                
        System.out.println(iDigit);  
        }   
    }
}

class DigitDisplaySeparatedVariable
{
    public static void main(String[] args) 
    {
        Digit digit = new Digit();
        digit.DisplayDigits();   
    }
}