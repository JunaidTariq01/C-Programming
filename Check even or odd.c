# include<stdio.h>
int main(){
int even;
printf("Enter any Number to Check: ");
scanf("%d",&even);
if(even>=0){
if(even%2==0)
printf("%d is an Even Number",even);
else
printf("%d is an Odd Number",even);
}
else
printf("You Entered an negative number!!");

return 0;
}