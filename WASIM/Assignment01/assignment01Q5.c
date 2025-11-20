//(PROBLEM5) calcualte the costprice of one item
#include<stdio.h>
int main(){
    //declare variable.
  float totalsellingprice,totalprofit,costpriceone;

   //taking input
  printf("Enter the total selling price of 15 items: ");
  scanf("%f",&totalsellingprice);

  printf("Enter total profit earned: ");
  scanf("%f",&totalprofit);

  //calculation
  costpriceone= (totalsellingprice-totalprofit)/15;

  //printing output
  printf("%f",costpriceone);



}
