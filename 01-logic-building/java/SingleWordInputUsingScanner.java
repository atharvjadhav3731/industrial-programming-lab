import java.util.Scanner;

class SingleWordInputUsingScanner
{
    public static void main(String[] args) 
    {
        Scanner scanner = null; 
        String sNme = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter your Name ");
        String sName = scanner.next();

        System.out.println("Welcome "+sName);

    }
}

 