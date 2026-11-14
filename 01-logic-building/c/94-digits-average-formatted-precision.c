#include <stdio.h>
#include <stdlib.h>
/*
*/
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
    while( ino != 0)
    {
        iDigit = ino % 10;
        iSum = iSum + iDigit;
        iCount++;
        ino = ino / 10;
    }
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
    printf("Average is : %.2f \n",fret);   // Width Specifier specifies how much digit display after .

    return EXIT_SUCCESS;
}