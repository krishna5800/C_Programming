#include<stdio.h>
#include<string.h>                      // Header file for string

int main()
{
    char Arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s\n", Arr);                // Hello

    printf("%ld\n", sizeof(Arr));       // 6    // Size of operator

    printf("%d\n", strlen(Arr));        // 5    // String length function is in <string.h> header file

    return 0;
}