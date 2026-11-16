#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[20] = {"Ganesh Pune"};

    printf("%s\n",arr);
    printf("Size of Array is : %d \n",sizeof(arr));
    printf("Length Of String is : %d \n",strlen(arr));

    return EXIT_SUCCESS;
}