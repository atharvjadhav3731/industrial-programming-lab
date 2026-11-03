import java.util.Scanner;

class FloatPrecisionLossError
{
    public static void main(String[] args) 
    {
        Scanner scanner = null; 
        String sName = null;
        int iAge =  0;
        float fMarks = 0.0;                 //Error as we using default valuemof double for float (i.e loosy conversion)

        scanner = new Scanner(System.in);

        System.out.println("Enter your Name ");
        sName = scanner.next();

        System.out.println("Enter your Age");
        iAge = scanner.nextInt();

        System.out.println("Enter Your marks");
        fMarks = scanner.nextFloat();

        
        System.out.println("Welcome "+sName);
        System.out.println("Enter your Age: "+ iAge);
        System.out.println("Enter your Marks:"+fMarks);


    }
}

 