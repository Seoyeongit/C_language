#include <stdio.h>

int main(void) {
    char ch = 7;
    int num = 1000;
    double d_num = 3.14;

    printf("변수     ch 크기 : %d \n", sizeof(ch));
    printf("변수    num 크기 : %d \n", sizeof(num));
    printf("변수  d_num 크기 : %d \n\n", sizeof(d_num));

    printf("char        크기 : %d \n", sizeof(char));
    printf("short       크기 : %d \n", sizeof(short));
    printf("int         크기 : %d \n", sizeof(int));
    printf("long        크기 : %d \n", sizeof(long));
    printf("long long   크기 : %d \n", sizeof(long long));
    printf("float       크기 : %d \n", sizeof(float));
    printf("double      크기 : %d \n", sizeof(double));
    printf("long double 크기 : %d \n", sizeof(long double));
    return 0;
}