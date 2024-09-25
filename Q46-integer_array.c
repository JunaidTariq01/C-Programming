#include<stdio.h>
int main(){
int a,i,sum=0;
int arr[100];
printf("Enter the size of arr ");
scanf("%d",&a);
printf("Enter the elements ");
for(i=0;i<a;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<a;i++){
    sum = sum + arr[i];
}
printf("sum is %d",sum);


}