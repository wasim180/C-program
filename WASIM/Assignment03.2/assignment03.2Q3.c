#include<stdio.h>
int main(){
    int temp;

    printf("Enter temperature in centigrade:  ");
    scanf("%d",&temp);

    if(temp<0){
        printf("Freezing weather ");
    }
    else if(temp<10){
        printf("very cold weather ");
    }
    else if(temp<20){
        printf("cold weather");
    }
    else if(temp<30){
        printf("normal in temp");
    }
    else if(temp<40){
        printf("it's hot");
    }
    else{
        printf("it's very hot");
    }



}
