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

    for(iCnt = 97; iCnt <= 122; iCnt ++)  //'a' = 97 'z' = 122
    {
        printf("%c\n",iCnt);
    }
    return EXIT_SUCCESS;
}
