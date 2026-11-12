import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
        int ino = 175902;

        while(ino != 0)
        {
        System.out.println("Digit is :" + (ino % 10));  
        ino = ino / 10;                
        System.out.println("Number is : " + ino);  
        }   
    }
}

class DigitExtractionUsingWhileLoop
{
        public static void main(String[] args) 
    {
        Digit digit = new Digit();
        digit.DisplayDigits();   
    }
}