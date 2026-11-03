#include<stdio.h>
#include<stdlib.h>
float Average(int ino1, int ino2, int ino3)
{
    float favg = 0.0;
    favg = ((float)ino1 + (float)ino2 + (float)ino3 )/3; // Typecasting 

    return favg; 
}

int main()
{
    int ivalue1 =0, ivalue2 =0, ivalue3=0;
    float fresult =0.0f;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);

    printf("Enter Third Number\n");
    scanf("%d",&ivalue3);

    fresult =  Average(ivalue1,ivalue2, ivalue3);

    printf("Average is : %f\n",fresult);

    return EXIT_SUCCESS;

}