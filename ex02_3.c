#include <stdio.h>

int main(void) {
    printf("%d x %d = %d\n", 5,1,5*1);
    printf("%d x %d = %d\n", 5,2,5*2);
    printf("%d x %d = %d\n", 5,3,5*3);
    printf("%d x %d = %d\n", 5,4,5*4);
    printf("%d x %d = %d\n", 5,5,5*5);

    // 오른쪽 정렬 (2칸을 미리 확보해 줌)
    printf("%d x %d = %2d\n", 5,1,5*1);
    printf("%d x %d = %2d\n", 5,2,5*2);
    printf("%d x %d = %2d\n", 5,3,5*3);
    printf("%d x %d = %2d\n", 5,4,5*4);
    printf("%d x %d = %2d\n", 5,5,5*5);
}