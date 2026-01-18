#include<stdio.h>
int main(){
    int cp,sp,profit,loss;

    printf(" Enter your cp:");
    scanf("%d",&cp);

    printf("Enter your sp: ");
    scanf("%d",&sp);

    profit= (sp-cp);
    loss=(cp-sp);

    if(sp>cp){
        printf(" profit= %d",profit);
    }
    else if(sp<cp){
        printf(" loss=%d",loss);
    }
    else if(sp==cp){
        printf("no proft, no loss");
    }
    else {
        printf("invalid");
    }



}
