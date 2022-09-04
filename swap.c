#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter value of A and B :");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("\n Value of A = %d", a);
    printf("\n Value of B = %d", b);
    return 0;
}