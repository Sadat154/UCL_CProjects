#include "graphics.h"
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 5; i++) {

        drawLine(140,50, 190,50);
    }
    return 0;
}
//use 8-iterations for loop and rotation matrix