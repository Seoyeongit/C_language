#include <stdio.h>
// 이동연산 -> 곱하기 하는 것보다 자리를 옮겨서 작업해주는 것이 속도가 빠름 : 효율성을 높여줌
int main(void) {
    int num = -16;      // 11111111 11111111 11111111 11110000
    
 
    // 1인 경우는 1로, 0인 경우는 0으로 채워짐
    printf("2칸 이동 결과 : %d\n", num >> 2); // 2로 나눔
    printf("3칸 이동 결과 : %d\n", num >> 3); // 2로 3번 나눔 
    
    return 0;
}