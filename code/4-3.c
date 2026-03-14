#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a<2){
        printf("flase");
        return 0;
    }
    for(int i = 2; i<a; i++){
        int b = a%i;
        if(b == 0){
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}

