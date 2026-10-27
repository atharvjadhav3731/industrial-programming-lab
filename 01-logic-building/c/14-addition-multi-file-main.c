#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Entry Point of Application 
//
//////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 =0 , iResult =0;

    printf("Enter First Number\n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to Procesd as input is invalid");

        return EXIT_FAILURE;
    }
    printf("Enter Second Number\n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"unable to proceed as input is invalid");

        return EXIT_FAILURE;
    }

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

