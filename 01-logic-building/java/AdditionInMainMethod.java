// Approch 2

import java.util.Scanner;

class AdditionInMainMethod
{
    public static void main(String[] args) 
    {
        Scanner scanner = null; 

        int iValue1 = 0, iValue2 = 0, iResult= 0;
        scanner = new Scanner(System.in);

        System.out.println("Enter First Number");
        iValue1 = scanner.nextInt();

        System.out.println("Enter Second Number");
        iValue2 = scanner.nextInt();

        iResult = iValue1 + iValue2; // Business Logic

        System.out.println("Addiotion is : "+ iResult);
      

    }
}

 