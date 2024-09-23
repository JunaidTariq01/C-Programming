#include<stdio.h>
#include<math.h>
int main() {
int a,sum,j,orig=a;
int count=0;
printf("Enter any number ");
scanf("%d",&a);
int m=a;
while(a!=0){
    j=a%10;
    count++;
    m=m/10;
}
while(a!=0){
    j=a%10;
    sum = sum + pow(j,count);
    a=a/10;
}
if(sum==m)
printf("Armstrong");
}