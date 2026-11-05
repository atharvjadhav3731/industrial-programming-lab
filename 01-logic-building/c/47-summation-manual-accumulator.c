// Input = 5
// output = 1+2+3+4+5= 15

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iCnt =0;
    int iSum = 0;

    iCnt = 1;
    // iSum = 0+1
    iSum = iSum + iCnt;
    iCnt++;         // iCnt = 2

    iSum = iSum + iCnt; // iSum = 1+2
    iCnt++;            //3

    iSum = iSum + iCnt; //iSum = 3 +3
    iCnt++;         //6

    iSum = iSum + iCnt; //iSum = 6 + 4
    iCnt++;                //10

    iSum = iSum + iCnt; //iSum = 10 + 5
    iCnt++;                //15

    printf("%d\n",iSum);

    return EXIT_SUCCESS;
}
