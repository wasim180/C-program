//(PROBLEM2)calculate gross salary of an employee.
#include<stdio.h>
int main(){
    //declare variable
    float basicsalary,dearnessallowance,houserentallowance,grosssalary;

    //taking input
    printf("enter ramesh's basic slary: ");
    scanf("%f",&basicsalary);

    //calculation
    dearnessallowance=0.40*basicsalary;
    houserentallowance=0.20*basicsalary;
    grosssalary= basicsalary+dearnessallowance+houserentallowance;

    //printining output
    printf("\n dearness allowance=%f",dearnessallowance);
    printf("\nhouserent allowance=%f",houserentallowance);
    printf("\n gross salary=%f",grosssalary);




}
