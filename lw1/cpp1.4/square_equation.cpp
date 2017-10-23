#include <cstdio>
#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0; 
    float x1 = 0; 
    float x2 = 0; 
    std::puts("please enter a, b, c for 'a*x*x + b*x + c = 0':");
    std::scanf("%f%f%f", &a, &b, &c);
    d = (b * b) - (4 * a * c) ;
    if (abs(d) == d) 
    {

        x1 = ((-b) + sqrt(d)) / (2 * a); 
        x2 = ((-b) - sqrt(d)) / (2 * a); 

        std::printf("Solution:\nx1 = %f\nx2 = %f", x1, x2);
    }
    else 
    {
        std::puts("d<0 - no roots");
    }
}
 
