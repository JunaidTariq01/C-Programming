#include<stdio.h>
int main(){
int x=0;
int i,y,z;
printf("Enter any number :");
scanf("%d",&y);
printf("Enter scd number :");
scanf("%d",&z);
for(i=y;i<=z;i++){
    x=x+i;
}

printf("%d",x);
   return 0;
}