/*
    Input   : 4
    Output  : 1 *   2   *   3   *   4   *   5   *   6   *
*/


#include <stdio.h>
#include <stdlib.h>

void Pattern(int ino)
{
    for(int iCnt =1; iCnt <= ino; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Value\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}
