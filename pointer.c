//call by value
#include<stdio.h>
/*int swap(int,int);
int main(){
    int a,b;
    printf("Enter 2 no's to swap ");
    scanf("%d %d",&a,&b);
    swap(a,b);
   
}
int swap(int x, int y){
 int temp =x;
 x=y;y=temp;
printf("no's %d %d",x,y);
}
*/
//call by reference
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