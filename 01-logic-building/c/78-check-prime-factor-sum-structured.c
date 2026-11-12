#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool ChekPrime(int ino)
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
        return true;
    }
    else 
    {
        return false;
    }
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the NUmber : \n ");
    scanf("%d",&iValue);

    bRet = ChekPrime(iValue);

    if(bRet)
    {
        printf("It is Prime NUmber");
    }
    else
    {
         printf("It is  not a Prime NUmber");
    }

    return EXIT_SUCCESS;
}