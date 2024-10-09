#include <stdio.h>


int main(void) {
    
    int counter = 0;

    while (counter ++ < 13) {

        int result = counter * 13;
        printf("%d * 13 = %d\n", counter, result);

    }


    return 0;
}