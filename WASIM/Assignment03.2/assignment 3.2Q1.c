#include<stdio.h>
int  main(){
    float a,b,c,D;

    printf("Enter coefficients of  a: ");
    scanf("%f",&a);

    printf("Enter coefficients of b: ");
    scanf("%f",&b);

    printf("Enter coefficients of c: ");
    scanf("%f",&c);

    D=(b*b-4*a*c);

    if(D>0){
        printf("Roots are real and distinct:");
    }
    else if(D==0){
        printf("Roots are real and equal: ");
    }
    else{
        printf("Roots are imaginary: ");
    }
    printf("%f",D);



}
