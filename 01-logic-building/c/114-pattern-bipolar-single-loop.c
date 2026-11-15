/*
    Input   : 4
    Output  : -4 -3 - 2 -1  0   1   2   3   4
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int ino)
{
    for(int iCnt = -ino; iCnt <= ino ; iCnt++)
    {
        printf("%d\t",iCnt);                        // time complexicity = 2N
    }                                                   // O(2n) --> O -> Order
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Value\n");
    scanf("%d",&iValue);                          // Total time complexicity = O(2N)

    Pattern(iValue);
    return EXIT_SUCCESS;
}
