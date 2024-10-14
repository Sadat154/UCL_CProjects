#include <stdio.h>
#include "math.h"

int main(void) {
    int rowMax =7;
    int columnMax =8;

    for (int row = 0; row < rowMax; row++) {
        for (int column = 0; column < columnMax; column++) {
            if (row == 0 || row == (rowMax-1) || column == 0 || column == (columnMax-1)){
                printf("*");
            }
            else {
                if (row !=1 && column != 1 && row != rowMax-2 && column != columnMax-2)
            {
                if ((column != 2 && column != columnMax-3) && row == ceil(rowMax / 2))
                {
                    printf(" ");
                }
                else {
                printf("#");
                }
            }
                else {
                    printf(" ");
                }
            }

            
            
            
        }
        printf("\n");
    }


    return 0;
}