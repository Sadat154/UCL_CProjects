//This program displays a circle inside a square with the two shapes meeting at exactly 4 points

#include "graphics.h"
#include <math.h>

int main(void)
{
    setWindowSize(400,400);
    //drawRect(150,150,50,50);
    drawArc(150,150,50,50,0,360);
    drawRect(157.32233047,157.32233047,25*sqrt(2),25*sqrt(2));
    return 0;
}