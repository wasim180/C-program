//(problem4):convert  minutes to hours and minutes.
#include<stdio.h>
 int main(){
     //declare variable.
     int m,hour,minutes;

     //taking input.
     printf("enter the number of minute: ");
     scanf("%d",&m);

    //calculation
     hour=(m/60);
     minutes=(m%60);

     //printing hours and minutes.
     printf("%d hours," ,hour);
     printf("%d minutes",minutes);


 }
