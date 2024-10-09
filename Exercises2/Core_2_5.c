#include <stdio.h>


int main(void) {
    int rowMax =6;
    int columnMax =6;
    int skipCounter = 0;

    for (int row = 0; row < rowMax; row++) {
        for (int column = 0; column < columnMax; column++) {
            if (column >= skipCounter)
            {
                printf("*");
                
            }
            else {
                printf(" ");
            }
            
            
            
        }
        skipCounter++;
        printf("\n");
    }


    return 0;
}