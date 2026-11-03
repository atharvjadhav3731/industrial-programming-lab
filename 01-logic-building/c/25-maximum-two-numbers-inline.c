#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue1 =0, ivalue2 =0, iresult =0;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);

    if(ivalue1 > ivalue2)
    {
        printf("Maximum Numbe is : %d \n",ivalue1);
    }
    else
    {
        printf("Maximum number is : %d\n", ivalue2);
    }

    return EXIT_SUCCESS;
}