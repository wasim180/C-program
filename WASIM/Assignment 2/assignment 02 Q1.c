// (problem1) convert centigrade to fahrenheit.
#include<stdio.h>
 int main(){
     //declare variable
   float centigrade,fahrenhite;

   //taking input
   printf("enter the temperature in centigrade: ");
   scanf("%f",&centigrade);

   //calculation
   fahrenhite=(9*centigrade)/5+32;

   //printing output
   printf("%f",fahrenhite);


}
