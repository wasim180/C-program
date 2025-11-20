#include<stdio.h>
int main(){
    char name[20];
    int id,units,bill,surfcharge,totalbill;

    printf("Enter customer id ");
    scanf("%d",&id);

    printf("Enter customer name: ");
    scanf("%s",&name);

    printf("Enter  consumed units; ");
    scanf("%d",&units);

    if(units>=0 && units<=199){
        bill= (units*1.20);
        printf("total bill=%d",bill);
    }
    else if(units>=199 && units<=399){
        bill= (units*1.50);
        printf("total bill=%d",bill);
    }
    else if(units>=399 && units<=599){
        bill= (units*1.80);
        printf("total bill=%d",bill);
        surfcharge= (bill*15)/100;
        printf("\n surfcharge=%d",surfcharge);
        totalbill=bill+surfcharge;
        printf("\n total bill= %d",totalbill);
    }
    else if(units>599){
        bill= (units*2.00);
        printf("total bill=%d",bill);
         surfcharge= (bill*15)/100;
        printf("\n surfcharge=%d",surfcharge);
        totalbill=bill+surfcharge;
        printf("\n total bill= %d",totalbill);


    }
    }




