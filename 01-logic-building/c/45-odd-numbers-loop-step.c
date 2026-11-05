// Input = 10
// output = 1 3 5 7 9

#include <stdio.h>
#include <stdlib.h>

void Display(int ino)
{
    
    int iCnt = 0;
    for(iCnt =1; iCnt <=ino; iCnt= iCnt+2)
    {
        printf("%d\t",iCnt);
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
