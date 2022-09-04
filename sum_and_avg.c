#include<stdio.h>
int main()
{
    int a, b, c, sum; 
    float avg;
    printf("Enter the value of A, B, C:");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avg = sum/2;
    printf("\n Value of sum = %d", sum);
    printf("\n Value of avg = %f", avg);
    return 0;
}