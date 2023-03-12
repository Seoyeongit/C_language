#include <stdio.h>

int main(void) {
    printf("hello world! \n");
    printf("%d \n", 1234); // %d 서식문자 : %d의 위치에 뒤에 적혀있는 값을 넣어주는 역할 (정수에만 사용 가능)
    printf("%d %d \n", 10, 20); // %d는 사용할 만큼 짝을 지어서 사용한다 자리 하나당 하나값 들어감
    return 0;
}
