#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the length of side A: ");
    scanf("%d",&a);

    printf("Enter the length of side B: ");
    scanf("%d",&b);

    printf("Enter the length of side C: ");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("Equilator Triangle ");
    }
    else if(a==b||b==c||c==a){
        printf("isosceles triangle");
    }
    else{
        printf("scalence triangle ");
    }
}
