//(PROBLEM3)convert distance from kilometers to meters,feet,inches and centimeters.
#include<stdio.h>
int main(){
    //declare variable
  float km,m,feet,inches,cm;

  //taking input
  printf("Enter the distance between two cities(in km): ");
  scanf("%f",&km);

  //calculation
  m=km*1000;
  feet=m*3.28084;
  inches=feet*12;
  cm=km*100000;

  //printing output.

  printf("%f",m);
  printf("%f",feet);
  printf("%f",inches);
  printf("%f",cm);



}
