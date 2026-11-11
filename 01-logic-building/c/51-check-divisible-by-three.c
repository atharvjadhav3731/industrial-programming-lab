#include <stdio.h>
#include <stdlib.h>

void checkDivisible(int iNo)
{
    if(iNo % 3 == 0)
    {
        printf("Divisible by 3\n");
    }else
    {
        printf("Not Divisible By 3\n");
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