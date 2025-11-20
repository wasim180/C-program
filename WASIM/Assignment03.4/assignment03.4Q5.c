#include<stdio.h>
int main(){
   int choice,a,b,sum,difference,multiplication;
   float division;

   printf("choice1=addition\n");
   printf("choice2=substraction\n");
   printf("choice3=multiplication\n");
   printf("choice4=division\n");

   printf("Enter your choice: ");
   scanf("%d",&choice);

   if(choice==1){
    printf("Enter number1: ");
    scanf("%d",&a);
    printf("Enter number2: ");
    scanf("%d",&b);

    sum=a+b;
    printf("sum=%d",sum);
   }
   else if(choice==2){
    printf("Enter number1: ");
    scanf("%d",&a);
    printf("Enter number2: ");
    scanf("%d",&b);

    difference=a-b;
    printf("difference=%d",difference);
   }
    else if(choice==3){
            printf("Enter number1: ");
            scanf("%d",&a);
            printf("Enter number2: ");
            scanf("%d",&b);

            multiplication=a*b;
            printf("product=%d",multiplication);
   }
    else if(choice==4){
        printf("Enter number1: ");
        scanf("%d",&a);
        printf("Enter number2: ");
        scanf("%d",&b);

        division=a/b;
        printf("Quotient=%f",division);

    }
     else{
        printf("Invalid option selected ");
        }


}
