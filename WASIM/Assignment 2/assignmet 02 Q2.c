//(problem2:) calculate the volume of a sphere
#include<stdio.h>
int main(){
    //declare variable
   float radius,volume;
   const pi=3.14;

   //taking input
   printf("enter the radius of a sphere: ");
   scanf("%f",&radius);

   //calculation
   volume=(4*pi*radius*radius*radius)/3;

   //printing volume
   printf("%f",volume);


}
