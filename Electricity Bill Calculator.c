/*
Program: Electricity Bill Calculator (Using Nested if–else Statements)
Author: Aasher
Description: Calculates electricity bill based on consumer type (house/commercial) and units consumed using nested and chained if–else statements.
*/
#include <stdio.h>

int main()
{
int units, unit_price, bill;
char type;
printf("Enter h for house consumer and c for commercial user:");
scanf(" %c", &type);
printf("Enter the amount of units consumed:");
scanf("%d", &units);

if(units<=200) {
  if(type=='h')
      unit_price = 10;
  else if(type=='c')
      unit_price = 12;
}
else if(units>200 && units<=400) {
  if(type=='h')
      unit_price = 12;
  else if(type=='c')
      unit_price = 15;
}
else {
   if(type=='h')
      unit_price = 15;
   if(type=='c')
      unit_price = 20;
}
bill = units*unit_price;
printf("Your electricity bill of this month is %d. \n", bill);
return 0;



}
