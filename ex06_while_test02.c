#include <stdio.h>

int main(void) {
    
    int dan = 0, i = 9;

    printf("정수 입력 : ");
    scanf("%d", &dan);

    while ( i >= 1 ) {
        printf("%d * %d = %d\n", dan, i, dan * i);
        i--;4
    }

    return 0;
} 