#include<stdio.h>
int main()
{
    int num, rem, rev=0, temp;
    printf("Input a number:");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    }
    printf("The reverse of %3d is %3d \n", num, rev);
    return 0;
}