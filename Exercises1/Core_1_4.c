// This program displays an Octagon using rotational matrixes

#include "graphics.h"
#include <math.h>
#include <stdio.h>


int main(void)
{   
    double pi = 3.14159;
    double angle = (pi / 7)*2;
    int noSides = 7;
    double oldX = 90;
    double oldY = 90;
    double newX;
    double newY;

    int i;
    setWindowSize(2000,1000);

    for (i = 0; i < noSides; i ++)
    {
        newX = ((cos(angle)*oldX) - (sin(angle)*oldY));
        newY = ((cos(angle)*oldY) + (sin(angle)*oldX));
        drawLine(oldX+ 250,oldY+250, newX+250,newY+250); // (x1,y1) to (x2,y2)
        oldX = newX;
        oldY = newY;
    }

    
    return 0;
}