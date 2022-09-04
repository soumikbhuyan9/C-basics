#include<stdio.h>
int main()
{
    int num, rem, temp, count=0;
    printf("Input a number:");
    scanf("%d",&num);
    temp = num;
    while (temp !=0)
    {
        rem = temp%10;
        count++;
        temp=temp/10;
    }
    printf("the number of digits in %d is %d\n", num, count);
    return 0;
}