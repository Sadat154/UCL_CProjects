#include <stdio.h>


int main(void) {
    int rowMax =5;
    int columnMax =7;

    for (int row = 0; row < rowMax; row++) {
        for (int column = 0; column < columnMax; column++) {
            if (row == 0 || row == (rowMax-1) || column == 0 || column == (columnMax-1)){
                printf("*");
            }
            else {
                printf(" ");
            }
            
        }
        printf("\n");
    }


    return 0;
}