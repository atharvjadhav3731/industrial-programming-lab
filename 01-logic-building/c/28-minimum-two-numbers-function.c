#include<stdio.h>
#include<stdlib.h>
int Minimum(int ino1, int ino2)
{
     if(ino1 < ino2)
    {
        return ino1;
    }
    else
    {
        return ino2;
    }

}
int main()
{
    int ivalue1 =0, ivalue2 =0, iresult =0;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);

    iresult =  Minimum(ivalue1,ivalue2);

    printf("Minimun number is :%d\n",iresult);

    return EXIT_SUCCESS;

}