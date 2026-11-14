#include <stdio.h>
#include <stdlib.h>
void DisplayDigit(int ino)
{
    int iDigit = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        printf("%d\n",iDigit);
        ino = ino /10;
    }   
}
int main()
{
    int iValue = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}
