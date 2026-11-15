/*
    Input   : 4
    Output  : A B C D
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int ino)
{
    int iCnt = 0;
    char ch = '\0';

    
    for(int iCnt = 1, ch = 'A'; iCnt <= ino ; iCnt++ , ch++) 
    {
        printf("%c\t",ch);
    }                                                   
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Value\n");
    scanf("%d",&iValue);                          

    Pattern(iValue);
    return EXIT_SUCCESS;
}
