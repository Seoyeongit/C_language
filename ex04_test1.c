#include <stdio.h>
// 비트연산자를 활용하여 입력받은 정수값의 부호를 바꿔서 출력하는 프로그램 작성
int main (void) {

/*  나의 풀이
    int num;
    int result = ~num;

    printf("정수 입력 : ");
    scanf("%d\n", &num);

    
    printf("부호 바꾼 결과 : %d\n", result);
    num++; */

// 교수님 풀이 -> 2의 보수 
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    num = ~num;  // 2의 보수를 취하지 않음 
    num++; // 1 -> 0, 0 -> 1로 바꿔주고 +1을 해줘야하기 때문에
    
    printf("부호 바꾼 결과 : %d\n", num);

    return 0;
}