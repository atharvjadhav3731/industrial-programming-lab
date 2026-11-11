#include <stdio.h>
#include <stdlib.h>

void checkPerfect(int ino)
{
    int iCnt = 0, iSum = 0;
    
   
    for(int iCnt =1 ; iCnt <= ino/2 ; iCnt++)
    {
        if(ino % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    if(iSum == ino)
    {
        printf("It is perfect Number\n");
    }
    else
    {
        printf("It io not perfect Number\n");
    }
   
}

int main ()
{
    int iValue =0;
   
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    checkPerfect(iValue);

    return EXIT_SUCCESS;
}

/*
    Time Complexity : O(N/2)
*/