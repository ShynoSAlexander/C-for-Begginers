/*Program to read mark of 5 subjects and print the grade of a student*/
#include <stdio.h>

int main()
{
   int a,b,c,d,e,s;
   printf("\n Enter the mark of sub 1,sub 2,sub 3,sub 4,sub 5: ");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   s=a+b+c+d+e;
   printf("\nThe sum is %d",s);
   if(s>=480 && s<=500)
   printf("\nThe grade is O");
   else if(s>=450 && s<=479)
   printf("\nThe grade is A+");
   else if(s>=400 && s<=449)
   printf("\nThe grade is A");
   else if(s>=350 && s<=399)
   printf("\nThe grade is B+");
   else if(s>=300 && s<=349)
   printf("\nThe grade is B");
   else if(s>=250 && s<=299)
   printf("\nThe grade is C");
   else if(s>=200 && s<=249)
   printf("\nThe grade is D");
   else if(s>=0 && s<=200)
   printf("\nThe grade is F");
   return 0;
}

