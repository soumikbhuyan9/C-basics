#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, area;
    printf("\n Enter three sides:");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Area of triangle = %f Sq.unit", area);
    return 0;
}