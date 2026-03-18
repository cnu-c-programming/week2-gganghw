#include <stdio.h>

int main()
{
    char a = 'a';
    char b = 'b';

    printf("sizeof(a + b) is: %u\n", sizeof((char)(a + b)));
    
    return 0;
}

