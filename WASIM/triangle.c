#include<stdio.h>
 int main(){

       int a;
       int b;
       int c;

    printf("enter the angle of a:");
    scanf("%d",&a);

    printf("enter the angle of b:");
    scanf("%d",&b);

    printf("enter the angle of c:");
    scanf("%d",&c);

    if(a+b+c==180){
      printf("valid triangle");
    }
     else{
        printf("not valid triangle");
     }

 }
