#include <stdio.h>

int main()
{
    for(int a = 1; a<10; a++){
        for(int i = 1; i<10; i++){
            int b = a*i;
            printf(" %d * %d = %d\n", a, i, b);
        }
    }
    return 0;
}

