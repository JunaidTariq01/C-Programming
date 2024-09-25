#include<stdio.h>
#include<math.h>
int main(){
//Print an integer
int nw;
printf("Enter any number to Print: ");
scanf("%d",&nw);
printf("Number Entered by you: %d\n",nw);

//add two numbers
int ist,scd;
printf("Enter ist number: ");
scanf("%d",&ist);
printf("Enter 2nd number: ");
scanf("%d",&scd);
printf("Add of two numbers is: %d\n", ist+scd);

//multiply two float numbers

float i,n;
printf("Enter ist number for multiply: ");
scanf("%f",&i);
printf("enter 2nd number: ");
scanf("%f",&n);
printf("Multiply of two numbers is: %f\n",i*n);

//Check its Prime or Not
int prm,nprm,com;
printf("Enter Number to check: ");
scanf("%d",&prm);

if(prm>=1){

for(nprm=2;nprm<=prm/2;++nprm ){
if(prm%nprm==0)
{com =1;
break;}

}

if(prm==1){
printf("1 is neither prime nor composite.\n");}
else{
if (com==0)
printf("%d is Prime number",prm); 
else
printf("%d is Not Prime number",prm);
}
}
else
printf("You Entered Negative Number !!!");

return 0;
}