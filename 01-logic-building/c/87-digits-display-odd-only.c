#include <stdio.h>
#include <stdlib.h>
void DisplayOddDigit(int ino)
{
    int iDigit = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        if((iDigit % 2) != 0)
        {
            printf("%d\n",iDigit);
        }
        ino = ino /10;
    }   
}
int main()
{
    int iValue = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayOddDigit(iValue);

    return EXIT_SUCCESS;
}
