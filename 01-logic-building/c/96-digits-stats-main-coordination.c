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
    int iValue = 0 , iSum = 0, iCount =0;
    float fAvg = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iSum = SumDigit(iValue);
    iCount = CountDigit(iValue);

    fAvg = (float)iSum/(float)iCount;

    printf("Number of Digit : %d \n",iCount);

    printf("Summation of : %d\n",iSum);

    printf("Average is : %.2f \n",fAvg);    // Width Specifier specifies how much digit display after .

    return EXIT_SUCCESS;
}