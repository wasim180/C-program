#include<stdio.h>
int main(){
   int choice ;
   float pi,radius, area;
   float length,width;
   float base,height;

   printf("choice1=circle:\n ");
   printf("choice2=rectangle:\n ");
   printf("choice3=triangle:\n ");

   printf("Enter your choice:");
   scanf("%d",&choice);

   if(choice==1){
        printf("Enter the radius of circle: ");
        scanf("%f",&radius);

        pi=3.1415;
        area= pi*radius*radius;
        printf("Area of the circle:=%f",area);
   }
   else if(choice==2){
   printf("Enter Length and Width of rectangle: ");
   scanf("%f%f",&length,&width);

   area=(length*width);
   printf("Area of the rectangle=%f",area);
   }
   else if(choice==3){
    printf("Enter the base and height of triangle: ");
    scanf("%f%f",&base,&height);

    area=0.5*base*height;
    printf("Area of the triangle=%f",area);
   }
   else{
    printf("Invalid option selected ");
   }

}
