#include<stdio.h>
  int main(){
    int a;
    int b;
    int c;

    printf("enter sides of triangle a:");
    scanf("%d",&a);

    printf("enter the side of triangle b:");
    scanf("%d",&b);

    printf("enter third side of triangle c:");
    scanf("%d",&c);

    if(a==b && b==c){
     printf("equilatoral");
   }
    else if(a==b||b==c||c==a){
     printf("isos");
  }
   else{
      printf("scalenc");
   }

  }
