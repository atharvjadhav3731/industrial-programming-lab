#include <stdio.h>
#include <stdlib.h>
int SumDigit(int ino)
{
    int iDigit = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    int iSum = 0;
    while(ino != 0)
    {
        iDigit = ino % 10;
        iSum = iSum + iDigit ;
        ino = ino /10;
    } 
    return iSum;  
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iret = SumDigit(iValue);
    printf("Summation is : %d \n",iret);

    return EXIT_SUCCESS;
}