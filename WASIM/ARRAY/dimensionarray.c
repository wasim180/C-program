#include<stdio.h>
int main(){
    int b[3]={5,9,11};
    int*p;
    p=b;

    printf("%d\n",*p);
    p=p+1;
    printf("%d\n",*p);
    p=p+1;
    printf("%d",*p);

}
