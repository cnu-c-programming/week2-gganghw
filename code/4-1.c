#include <stdio.h>

int main()
{
    int a, b, c;
    char d;

    scanf("%d %d %c", &a, &b, &d);

    switch (d){
        case '*':
        c = a * b;
        printf("%d\n", c);
        break;
         case '/':
         if(b == 0){
            printf("error\n");
         }else{
            c = a / b;
            printf("%d\n", c);
         }
        break;
         case '+':
        c = a + b;
        printf("%d\n", c);
        break;
         case '-':
        c = a - b;
        printf("%d\n", c);
        break;
        default:
        printf("Try again\n");

    }
    return 0;
}

