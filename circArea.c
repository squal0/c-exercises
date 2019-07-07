//program that finds the area an the circumference using functions
#include <stdio.h>
#include <math.h>

float getArea(int rad);
float getCircum(int rad);

#define myPi 22.0/7.0
int main()
{
    int radius;
    float area,circumference;
    printf("Please enter the radius of the circle->\n");
    scanf("%d", &radius);
    area = getArea(radius);
    circumference = getCircum(radius);
    printf("The area of the circle is %.2f cm2 and its circumference is %.2f cm ", area,circumference);
    printf("\nThe radius of the circle is %d cm", radius);
}
float getArea(int rad)
{
    float circArea;
    circArea = myPi * pow(rad, 2);
    return circArea;
}
float getCircum(int rad)
{
    float circum;
    circum = myPi * (rad * 2);
    return circum;
}
