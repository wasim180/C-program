// (PROBLEM1) compute the perimeter and area of a circle.
#include<stdio.h>
int main(){

     //declare variable
     float radius,perimeter,area,circle;
     const float pi=3.14;

     //taking input
     printf("enter the radius of circle:");
     scanf("%f",&radius);

     //calculation
     perimeter=2*3.14*radius;
     area=3.14*radius*radius;

     //printing output
     printf("%f",perimeter);
     printf("%f",area);


}
