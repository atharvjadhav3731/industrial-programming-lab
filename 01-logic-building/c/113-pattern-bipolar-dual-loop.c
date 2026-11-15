/*
    Input   : 4
    Output  : -4 -3 - 2 -1  0   1   2   3   4
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int ino)
{
    for(int iCnt = -ino; iCnt <= 0 ; iCnt++)
    {
        printf("%d\t",iCnt);                        // time complexicity = n
    }                                               // O(n)

    for(int iCnt =1; iCnt <= ino; iCnt++)
    {
        printf("%d\t",iCnt);                         // time complexicity = n
    }                                                  // O(n)
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Value\n");
    scanf("%d",&iValue);                          // Total time complexicity = 2n
                                                 // O(2N)
    Pattern(iValue);
    return EXIT_SUCCESS;
}
