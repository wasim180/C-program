#include<stdio.h>
int main(){
    int a,b,c,sum;

    printf("Enter angle1 of triangles: ");
    scanf(" %d",&a);

    printf("Enter angle2 of triangles: ");
    scanf(" %d",&b);

    printf("Enter angle3 of triangles: ");
    scanf(" %d",&c);

    sum=a+b+c;
    printf("sum= %d",sum);

    if(sum==180){
        printf("\n valid triangle ");
    }
    else{
        printf("\n invalid triangle ");
    }


}
