#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////
//
// Function Name    : Addition
// Input            : Integer, Integer
// Output           : Integer
// Description      : Perform addition
// Date             : 04/10/2026
// Author           ; Atharv Sanjay Jadhav
//
//////////////////////////////////////////////////////////////

int addition(
                int iNo1,  //First input
                int iNo2   //Second input
            )
{
    int ians = 0;
    ians = iNo1 + iNo2;  //Business Logic

    return ians;
}
//////////////////////////////////////////////////////////////
//
// Entry Point of Application 
//
//////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 =0 , iResult =0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

   iResult = addition(iValue1, iValue2);
    printf("Addition is : %d\n",iResult);
    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////
//
//     Step 5 :    Test the Program
//      
//      Tested Test Cases
//----------------------------------------
//  Input1       Input2      Output 
// ---------------------------------------
//   10             11          21
//   11             0           11
//   0              11          11
//   20             -9          11
//
//////////////////////////////////////////////////////////////

