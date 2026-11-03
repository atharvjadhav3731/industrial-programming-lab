import java.util.Scanner;

class ScannerNamingConventions
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your Name ");
        String sName = scanner.nextLine();

        System.out.println("Welcome "+sName);

    }
}




 