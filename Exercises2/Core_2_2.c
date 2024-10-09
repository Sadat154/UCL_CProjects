#include <stdio.h>


int main(void) {
    
    for (int counter = 1; counter < 14; counter++) {
        int result = counter * 13;
        printf("%d * 13 = %d\n", counter, result);
    }


    return 0;
}