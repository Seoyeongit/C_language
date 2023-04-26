#include <stdio.h>

int main(void) {
    int i, j = 1;

    while (j <= 9) {

        i = 1;
        
        while (i <= 9) {
            printf("%d * %d = %d\n", j, i, j*i);
            i++;
        }
    j++;
    }

    return 0;
} 