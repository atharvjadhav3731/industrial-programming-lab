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
   char ch = '\0';

    for(ch = 'A'; ch <= 'Z'; ch++)  
    {
        printf("%c\t",ch);
    }
    return EXIT_SUCCESS;
}
