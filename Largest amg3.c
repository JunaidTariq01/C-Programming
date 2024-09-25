#include<stdio.h>
//largest amg 3
int main(){
int ist,sec,trd;
printf("Please select three different Numbers...");
printf("\nEnter Ist Number: ");
scanf("%d",&ist);
printf("Enter 2nd Number: ");
scanf("%d",&sec);
printf("Enter 3rd NUmber: ");
scanf("%d",&trd);
if(ist>sec &&ist>trd &&sec!=trd)
printf("%d is the Largest Number",ist);
else if(sec>ist&&sec>trd&&ist!=trd)
printf("%d is the Largest Number",sec);
else if(trd>ist&&trd>sec&&ist!=sec)
printf("%d is the Largest Number",trd);
else if(ist==0&&sec==0&&trd==0)
printf("Critical ERROR!!!");
else if(ist==sec&&ist==trd&&sec==trd)
printf("All Numbers are equal !!!");
else if(ist==sec||ist==trd||sec==ist||sec==trd||trd==ist||trd==sec)
printf("Two Numbers are equal !!!");

return 0;
}