#include <stdio.h>
// 재귀함수를 사용하지 않고 거듭제곱 구하기 
int power(int m, int k)
{
    int i,p = 1;

    for(i = 0; i < k; i++)
    {
        p *= m;
    }
    return p;
}

int main(void) {

    int m = 2, k, c;

    for (k = 0; k <= 9; k++)
    {
        c = power(m, k);
        printf("%d ^ %d = %d \n", m, k, c);
    }
    
    return 0;
}
