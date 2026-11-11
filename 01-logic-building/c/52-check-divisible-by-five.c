#include <stdio.h>
#include <stdlib.h>

void checkDivisible(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Divisible by 5\n");
    }else
    {
        printf("Not Divisible By 5\n");
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