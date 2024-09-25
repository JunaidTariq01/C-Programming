#include<Stdio.h>
int swap(int,int);
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
