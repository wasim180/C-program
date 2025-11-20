#include<stdio.h>
int main(){
    char grade;

    printf("enter your Grade: ");
    scanf("%c",&grade);
    grade= tolower(grade);

    if(grade=='e'){
        printf("excellent");
    }
    else if(grade=='v'){
        printf("Very Good");
    }
    else if(grade=='g'){
        printf("Good");
    }
    else if(grade=='a'){
        printf("Average");
    }
    else if(grade=='f'){
        printf("fail");
    }
    else{
        printf("invalid grade entered.");
    }

}
