#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPalindrome(int ino)
{
    int iDigit = 0;
    int iRev = 0;
    while( ino != 0)
    {
        iDigit = ino % 10;
        iRev = (iRev * 10)+iDigit;
        ino = ino / 10;
    }
    
    if(iRev == ino)     // Issued
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);
    if(bRet == true)
    {
        printf("Number is Palindrome\n");
    }
    else 
    {
        printf("Number is Not Palindrome\n");
    }

    return EXIT_SUCCESS;
}
