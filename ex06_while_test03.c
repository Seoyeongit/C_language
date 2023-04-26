#include <stdio.h>

int main(void) {
    
    int dan = 9, i = 9;

    while (dan >= 2){

        i = 9;

        while ( i >= 1) {
            printf("%d * %d = %d\n", dan, i, dan * i);
            i--;
        }
        // 각 단이 끝난 다음에 띄어 쓸 수 있도록 하기
        printf("\n");

        dan --;
    }

    return 0;
} 