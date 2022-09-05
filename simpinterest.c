#include<stdio.h>
int main()
{
    int I, P, N, R;
    printf("\n Enter the principle amount:");
    scanf("%d", &P);
    printf("\n Enter the number of years:");
    scanf("%d", &N);
    printf("\n Enter the rate of interest:");
    scanf("%d", &R);
    I = P*N*R/100;
    printf("\n Simple interest: %d", I);
    return 0;
}