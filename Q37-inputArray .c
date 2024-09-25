#include<stdio.h>
int main(){
int a[100],i,n;
printf("Enter the size of Array ");
scanf("%d",&n);
printf("Enter elements of array ");
for(i=0;i<=n-1;i++){
    scanf("%d",&a[i]);
}
printf("Elements are ");
for(i=0;i<=n-1;i++){
    printf("%d",a[i]);
}






}