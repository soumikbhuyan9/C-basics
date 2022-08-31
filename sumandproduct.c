#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, sum, product;
    printf("\n Enter value of a:");
    scanf("%d", &a);
    printf("\n Enter value of b:");
    scanf("%d", &b);
    sum = a+b;
    product = a*b;
    printf("\n Sum = %d", sum);
    printf("\n Product = %d", product);
    getchar();
}