#include<stdio.h> 
#define PI 3.14
int main()
{
    float r, area, circum;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    area = r*r*PI;
    circum = 2*r*PI;
    printf("\n Area = %f", area);
    printf("\n Circumference = %f", circum);
    return 0;

}