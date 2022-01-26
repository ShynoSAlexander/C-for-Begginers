/*Program to read a three digit number and to find the sum of first and last digit*/
#include <stdio.h>
int main()
{
    int x,first_num,last_num,sum;
    printf("Enter a three digit number : ");
    scanf("%d",&x);
    first_num=x/100;
    last_num=x%10;
    sum=first_num+last_num;
    printf("The sum of first and last digit is : %d",sum);

    return 0;
}
