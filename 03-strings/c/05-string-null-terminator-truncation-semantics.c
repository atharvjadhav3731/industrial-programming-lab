#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100] = {'G' , 'A' , 'N' , 'E' , 'S' , 'H', '\0', 'P' , 'U' , 'N' , 'E' };
    printf("%s\n",arr);
    printf("Size of Array is : %d \n",sizeof(arr));

    return EXIT_SUCCESS;
}