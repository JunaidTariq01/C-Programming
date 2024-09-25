#include<stdio.h>
int main(){
int x=0;
int i,y,z;
printf("Enter ist number :");
scanf("%d",&y);
printf("Enter second number :");
scanf("%d",&z);
for(i=y;i<=z;i++){
    x=x+i;
}

printf("%d",x);
   return 0;
}