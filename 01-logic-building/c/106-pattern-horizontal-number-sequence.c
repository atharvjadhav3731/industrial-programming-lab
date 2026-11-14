#include <stdio.h>
#include <stdlib.h>
void Pattern(int ino)
{
    int iCnt = 0;
    for(int iCnt = 1 ; iCnt <= ino; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
