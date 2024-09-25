#include<stdio.h>
int main(){
int a,i,j,flag=1;
char arr[100];
printf("Enter any string :");
scanf("%s",&arr);
for (i=0;arr[i]!='\0';i++);
j=0;i--;
while(j<i){
    if(arr[j]!=arr[i]){
        printf("not");
        flag=1;
        break;
    }
j++;i--;
}
if(flag=0)printf("pand");
return 0;

}