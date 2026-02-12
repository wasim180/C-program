#include<stdio.h>
int main(){
    int a;
    a=5;
    float b;
    b=5.5;
    int *p;
    float *q;
    p=&a;
    q=&b;

    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",&a);
    printf("%d\n",q);
    printf("%f",b);


}
