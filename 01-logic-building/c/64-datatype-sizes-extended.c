#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Size if int : %zu\n",sizeof(int));
    printf("Size if char : %zu\n",sizeof(char));
    printf("Size if float : %zu\n",sizeof(float));
    printf("Size if double : %zu\n",sizeof(double));
    printf("Size if short int : %zu\n",sizeof(short int));
    printf("Size if long int  : %zu\n",sizeof(long int));
    printf("Size if long double : %zu\n",sizeof(long double));

    return EXIT_SUCCESS;
}