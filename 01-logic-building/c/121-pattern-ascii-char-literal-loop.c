/*
    Input   : 4
    Output  : A B C D
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 'A'; iCnt <= 'Z'; iCnt++)  
    {
        printf("%d\t%o\t%x\n%c\t",iCnt,iCnt,iCnt,iCnt);
    }
    return EXIT_SUCCESS;
}
