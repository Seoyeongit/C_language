#include <stdio.h>

int main(void) {
    int i=0, j=0;

    while(i<3){
        while(j<i) {
            j++;
            printf("hello world! ");
        }
    printf("hello world!\n");
    i++;
    j=0;
    }
    return 0;

} 