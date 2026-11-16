#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[] = {'G' , 'A' , 'N' , 'E' , 'S' , 'H', '\0'};
    printf("%s\n",arr);
    printf("Size of Array is : %d",sizeof(arr));

    return EXIT_SUCCESS;
}