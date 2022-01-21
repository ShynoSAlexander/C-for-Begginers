//PROGRAM TO ADD TWO NUMBERS
#include <stdio.h>

int main()
{
    int x,y,z;  //Declaring x ,y,z variables
    printf("Enter the first number : ");
    scanf("%d",&x);//scanf is used to take input from the user
    printf("Enter the second number : ");
    scanf("%d",&y);
    z=x+y;//adds the value of x and y(user given value) and stores it in z
    printf("The value of z is: %d",z);//prints the value of z

    return 0;
}
