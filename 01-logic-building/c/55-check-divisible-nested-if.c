#include <stdio.h>
#include <stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) ==0))
    {
        if((iNo % 5) == 0)
        {
        printf("Divisible \n");
        }
        else
        {
            printf("It is not Divisible\n");
        }
    }
    else
    {
        printf("It is not Divisible\n");
    }
}

int main ()
{
    int iValue =0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}