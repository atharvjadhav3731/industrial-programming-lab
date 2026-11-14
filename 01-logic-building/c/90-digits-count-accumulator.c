#include <stdio.h>
#include <stdlib.h>
int CountDigit(int ino)
{
    int iDigit = 0;
    int iCount = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    
    while(ino != 0)
    {
        iDigit = ino % 10;
        ino = ino /10;
        iCount++;
    } 
    return iCount;  
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iret = CountDigit(iValue);
    printf("Summation is : %d \n",iret);

    return EXIT_SUCCESS;
}