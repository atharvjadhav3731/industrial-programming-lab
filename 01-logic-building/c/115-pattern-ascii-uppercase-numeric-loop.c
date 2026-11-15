/*
    Input   : 4
    Output  : A B C D
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int ino)
{
    int iCnt = 0;
    for(iCnt = 'A'; iCnt< 'A'+ino; iCnt++)
    {
       printf("%c\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt <= 90; iCnt ++)  //'A' = 65. 'Z' = 90
    {
        printf("%d\n",iCnt);
    }
    return EXIT_SUCCESS;
}
