 //(problem3) convert hours and minutes to total minutes.
 #include<stdio.h>
 int main(){

 //declare variable
    int hours,minute,total;

    //taking input
    printf("enter the hours: ");
    scanf("%d",&hours);

    printf("enter the minute: ");
    scanf("%d",&minute);


    //calculation
    total=(hours*60+ minute);
    //printing minutes.
    printf("total minutes=%d",total);



 }
