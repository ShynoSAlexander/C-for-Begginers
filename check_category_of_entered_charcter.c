//  PROGRAM TO CHECK CATEGORY OF AN ENTERED CHARACTER
/*The if...else statement executes two different codes depending upon whether the test expression is true or false. Sometimes, a choice has to be made from more than 2 possibilities.
The if...else ladder allows you to check between multiple test expressions and execute different statements.*/
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a charchter: ");
  scanf("%c",&ch);
  if(ch>='A'&&ch<='Z') 
    printf("Its an Alphabet(Upper case)");
  else if(ch>='a'&&ch<='z')
    printf("Its an Alphabet(lower case)");
  else if(ch>='0'&&ch<='9')
    printf("Its a digit");
  else
    printf("Its a special character");
  return 0;
}
