#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;

    printf("Enter Number :");

    scanf("%d",&ivalue);

    if((ivalue % 2) == 0)
    {
        printf("Number is even");
    }else
    {
        printf("Number is odd");
    }

    return EXIT_SUCCESS;
}
