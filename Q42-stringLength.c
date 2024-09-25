#include<stdio.h>
int main(){
char arr[100];
int i=0;
printf("Enter the string ");
scanf("%s",&arr);
printf("The length is ");
while(arr[i]!='\0'){
    i++;
}
printf("%d",i);
}