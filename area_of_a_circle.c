//PROGRAM TO FIND AREA OF A CIRCLE
#include <stdio.h>
int main()
{
    float a,r,pi=3.14;/*In C, float data type occupies 4 bytes (32 bits) of memory to store real numbers that have at least one digit after the decimal point.*/
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);//%f sice r is declared as floating point type
    a=pi*r*r;
    printf("\nThe area of the circle is %f",a);

    return 0;
}
