#include<stdio.h>
#include<stdlib.h>
float Average(int ino1, int ino2)
{
    float favg = 0.0;
    favg = ((float)ino1 + (float)ino2)/2; // Typecasting

    return favg; 
}


int main()
{
    int ivalue1 =0, ivalue2 =0;
    float fresult =0.0;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);

    fresult =  Average(ivalue1,ivalue2);

    printf("Average is : %f\n",fresult);

    return EXIT_SUCCESS;

}