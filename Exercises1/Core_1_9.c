//This program displays a rainbow using arcs

#include "graphics.h"
#include <math.h>

int main(void)
{
    setWindowSize(400,400);
    fillArc(150,150,50,50,0,180);
    setColour(green);
    fillArc(155,155,40,40,0,180);
    setColour(red);
    fillArc(160,160,30,30,0,180);

    return 0;
}