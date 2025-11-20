#include<stdio.h>
int main(){
    int cp,sp,profit;

    printf(" Enter your cp:");
    scanf("%d",&cp);

    printf("Enter your sp: ");
    scanf("%d",&sp);

    profit= (sp-cp);

    if(sp>cp){
        printf(" profit= %d",profit);
    }
    else if(sp<cp){
        printf(" loss=%d",profit);
    }
    else if(sp==cp){
        printf("no proft, no loss");
    }
    else {
        printf("invalid");
    }



}
