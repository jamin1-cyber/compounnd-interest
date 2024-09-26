//A program to calculate compound interest

#include<stdio.h>

int main(){

//we declarer a variable for each 
int principal;
int time;
int rate;




/*we aske the user to enter
 there values according to sevings
 */
 
 printf("Enter your principal: ");
 scanf("%d", &principal);

 printf("Enter time(years): ");
 scanf("%d",&time);
 
 printf("Enter rate of the bank: ");
 scanf("%d",&rate);
 
 /*we now write variable 
 in which amount will be contained 
 */
 
 int amount;

 amount = principal *((1 + rate/100)^time);
 printf("amount is %d",amount);



return 0;
}