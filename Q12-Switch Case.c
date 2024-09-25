#include<stdio.h>
int main(){
int x;
printf("Enter 1 for salam,2 for hello,3 for banjour");
scanf("%d",&x);
switch (x)
{
case 1:
    printf("salaam");
    break;
case 2:
    printf("Hello");
    break;
case 3:
    printf("Banjour");
    break;
default: printf("Incorrect opt chosen");
    break;
}


}