// Input = 4
// output = 1   *   2   *   3   *

#include <stdio.h>
#include <stdlib.h>

void Display(int ino)
{
    
    int iCnt = 0;
    for(iCnt =ino; iCnt >=1; iCnt--)
    {
        printf("%d\t*\n",iCnt);
    }
    printf("\n");
}

int main()
{

    int iValue =0;
    printf("Enter the Frequency\n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return EXIT_SUCCESS;
}
