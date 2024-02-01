#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, s, area; printf("Enter the all sides of the triangles:"); scanf("%f %f %f", &a, &b, &c); s = (a + b + c) / 2; area = pow((s * (s - a) * (s - b) * (s - c)), 0.5); printf("The semi-perimeter of the triangle is : %.2f", s); printf("\n The area of the triangle is: %.2f", area);
}