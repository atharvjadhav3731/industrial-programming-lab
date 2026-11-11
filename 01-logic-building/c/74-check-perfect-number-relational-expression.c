#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkPerfect(int ino)
{
    int iCnt = 0, iSum = 0;
    
    for(int iCnt =1 ; iCnt <= ino/2 ; iCnt++)
    {
        if(ino % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return (iSum == ino);
   
}

int main ()
{
    int iValue =0;
    bool bRet = false;
   
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = checkPerfect(iValue);
    if(bRet == true)
    {
        printf("It is Perfect Number");
    }
    else{
         printf("It is not Perfect Number");
    }

    return EXIT_SUCCESS;
}
/*
    Time Complexity : O(N/2)
*/