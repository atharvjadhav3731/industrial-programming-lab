/*

    Step 1 :    Understand the Problem Statement
    Step 2 :    Write the Algorithm
    Step 3 :    Decide the Programming Language
    Step 4 :    Write the Program
    Step 5 :    Test the Program

*/

//////////////////////////////////////////////////////////////
//
// Step 1 :    Understand the Problem Statement
//              user is going to enter any 2 integer
// 
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
// Step 2 : Write the Algorithm
/*
    START
        Accept First Numberas no1
        Accept Second Numberas no2
        Create the variable as Ans to Store the result 
        Perform the Addition and Store into ans 
        Display the result from ans

    END
*/
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//
//  Step 3 :    Decide the Programming Language
//              We Select the C progrmming 
//
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//
//  Step 4 :    Write the Program
// 
//////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    int iValue1 = 0, iValue2 =0 , iResult =0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("Addition is : %d\n",iResult);
    return 0;
}
