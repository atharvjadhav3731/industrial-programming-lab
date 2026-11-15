/*

 Input : row = 4, coloumn = 4
 Output :
            A   A   A   A
            B   B   B   B               
            C   C   C   C
            D   D   D   D
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iCol)        
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A' ; i<= iRow; i++,ch++)
    {
        for(j =1; j <= iCol; j++)
        {
           printf("%c",ch);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Row :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Coloumn :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}
