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

float AverageOfDigit(int ino)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;
    if(ino < 0)
    {
        ino = -ino;
    }

    iSum = SumDigit(ino);
    iCount = CountDigit(ino);

    fAvg = (float)iSum/(float)iCount;  
    return fAvg ;
}

int main()
{
    int iValue = 0;
    float fret = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    fret = AverageOfDigit(iValue);
    printf("Average is : %.2f \n",fret);    // Width Specifier specifies how much digit display after .

    return EXIT_SUCCESS;
}