// Program to find the roots of a quadratic equation using discriminant.
#include <stdio.h>
#include <math.h>
float root1, root2;

void real(float a, float b, float d)
{
    d = pow(d, 0.5);
    root1 = ((-b + d) / 2 * a);
    root2 = ((-b - d) / 2 * a);
    printf("The two real roots of the equation are: %.2f and %.2f", root1, root2);
}

void imaginary(float a, float b, float d)
{
    d = pow(abs(d), 0.5);
    root1 = (-b) / 2 * a;
    root2 = (d) / 2 * a;
    printf("The two imaginary roots of the equation are: %.2f + %.2fi and %.2f - %.2fi", root1, root2, root1, root2);
}

void main()
{
    float a, b, c;

    printf("Enter the value of a, b and c:");
    scanf("%f %f %f", &a, &b, &c);
    float d = (pow(b,2)-4*a*c);

    if(d>=0){
        real(a,b,d);
    }else{
        imaginary(a,b,d);
    }
}