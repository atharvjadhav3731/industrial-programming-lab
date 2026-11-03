#include<stdio.h>
#include<stdlib.h>
void Maximun(
                int ino1, 
                int ino2
            )
{
    if(ino1 > ino2)
    {
       printf("Maximum number is :\n",ino1);
    }
    else
    {
        printf("Maximum number is :\n",ino2);
    }
}
int main()
{
    int ivalue1 =0, ivalue2 =0, iresult =0;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);

    Maximun(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}