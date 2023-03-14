// 소숫점이 있는 숫자 출력하기 (실수 출력) -> %lf 
#include <stdio.h>

int main(void) {
    printf("%lf x %d = %lf\n", 3.14,1, 3.14*1);
    printf("%lf x %d = %lf\n", 3.14,5, 3.14*5);
    printf("%lf x %d = %lf\n", 3.14,10, 3.14*10);

// 5개의 공간, 소숫점 2자리까지만 표시
    printf("%5.2lf x %d = %5.2lf\n", 3.14,1, 3.14*1);
    printf("%5.2lf x %d = %5.2lf\n", 3.14,5, 3.14*5);
    printf("%5.2lf x %d = %5.2lf\n", 3.14,10, 3.14*10);

    return 0;
}