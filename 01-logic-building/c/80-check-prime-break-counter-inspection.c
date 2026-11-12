#include <stdio.h>
#include <stdbool.h>
bool ChekPrime(int ino)
{
    int iCnt = 0;
    
    for(int iCnt = 2; iCnt < ino/2; iCnt++)
    {
        if(ino % iCnt == 0 )
        {
            break;
        }
    }
    
    if(iCnt == (ino/2)+1)
    {
        return true;
    }
    else{

        return false;
    }
}

int main()
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
    else{
         printf("It is  not a Prime NUmber");
    }
}