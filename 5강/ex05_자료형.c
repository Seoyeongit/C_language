#include <stdio.h>

int main(void) {
    int i = 2147483647;

    // 값보다 더 큰값이 입력되어서 오버플로
    printf("%d %d %d \n", i, i+1, i+2);
   
    return 0;
}