/*(problem1) Write a C program that determines whether a given year is leap year.
A year is a leap year if:
 1.it is divisible by 4 and
 2.if it is a century year, it must also be divisible by 400.*/

#include<stdio.h>
int main(){
    //declare variable
    int year;

    //taking input
    printf("Enter the year: ");
    scanf("%d",&year);

    //check condition and printing it is leap year or not.
    if(year%4==0){
      printf("it is leap year");
  /*}
  else if(year%100 && year%400){
    printf("it is also leap year");
  }*/
  }else{
    printf("it is not leap year");
  }

}
