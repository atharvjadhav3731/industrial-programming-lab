#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Number is even");
    }else
    {
        printf("Number is odd");
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter Number :");

    scanf("%d",&ivalue);

    CheckEven(ivalue);

    
    return EXIT_SUCCESS;
}
