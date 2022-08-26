#include<stdio.h>
int main()
{
    float c, f;
    printf("Input temp in cel");
    scanf("%f", &c);
    f = 9.0/5.0 *c + 32.0;
    printf("%f c is converted to %f", c, f);
    return 0;
}