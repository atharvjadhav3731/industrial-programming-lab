#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CheckPrime(int ino)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt =1; iCnt<= ino/2; iCnt++)
    {
        if((ino % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == 1)
    {
        printf("It is Prime Number\n");
    }
    else
    {
        printf("It is Not a Prime Number\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n ");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}