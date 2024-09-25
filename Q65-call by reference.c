#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 no's to swap ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("no's are %d %d",a,b);
}
void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}