#include <stdio.h>
#include <stdlib.h>
void Pattern(int ino)
{
    int iCnt = 0;
    for(int iCnt = 1 ; iCnt <= ino; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    Pattern(7);

    return EXIT_SUCCESS;
}
