#include<stdio.h>
int main(){
int a,i,j,b;
printf("Enter the no of rows : ");
scanf("%d",&a);
for(i=1;i<=a;i++){
 for(j=i;j>=1;j--)
 {
    printf("%d",i);
 }
 printf("\n");
}

return 0;
}