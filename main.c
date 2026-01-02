#include <stdio.h>
#include <stdlib.h>

static final int MAX=1000000;

int main(int argc, char *argv[]) {

    
    x0 = x //co-ordinate of pixel
    y0 = y //co-ordinate of pixel
    
    x = 0
    y = 0
    
    iteration = 0
    max_iteration = 1000
    
    while ( x*x + y*y <= (2*2) AND iteration < max_iteration )
    {
        xtemp = x*x - y*y + x0
        y = 2*x*y + y0
        
        x = xtemp
        
        iteration = iteration + 1
    }
    
    if ( iteration == max_iteration )
    then
        color = black
    plot(x0, y0, color)
    else
        color = iteration
    
    plot(x0, y0, color)

    return 0;
}

