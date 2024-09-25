#include<stdio.h>
int main(){
int i,n,c;
int a=0,b=1;
printf("Enter any number ");
scanf("%d",&n);
printf("%d %d",a,b);
for(i=1;i<=n-2;i++){
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
}
}