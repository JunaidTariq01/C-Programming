#include<stdio.h>
int main(){
char a[100];
int n,i;
printf("Enter the string ");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++);
i--;
while(i>=0){
    printf("%c",a[i]);
    i--;
}
}