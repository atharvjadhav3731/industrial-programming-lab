#include <stdio.h>
#include <stdlib.h>

void DisplayFactor(int ino)
{
    int iCnt = 0;
    printf("Factor of %d are : \n",ino);

    for(int iCnt =1 ; iCnt < ino/2 ; iCnt++)
    {
        if(ino % iCnt == 0)
        {
        printf("%d\n",iCnt);
        }
    }
}

int main ()
{
    int iValue =0;
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}
/*
    Time Complexity : O(N/2)
*/
