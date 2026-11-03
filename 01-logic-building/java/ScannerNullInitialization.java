import java.util.Scanner;

class ScannerNullInitialization
{
    public static void main(String[] args) 
    {
        Scanner scanner = null; 
        String sNme = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter your Name ");
        String sName = scanner.nextLine();

        System.out.println("Welcome "+sName);

    }
}

 