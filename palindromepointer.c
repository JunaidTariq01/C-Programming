//to check whether its palindome or not (using pointers)
#include<stdio.h>
int main(){
    char s[50], *p,*q;
 int i;
 printf("Enter the string to check ");
 scanf("%s",&s);
p = &s[50];
q = p;
while(*p != '\0'){
    p++;
}
p--;
while(p>q){
    if(*p != *q){
        printf("%s is not palindrome",s);
        return 0;
    }
    p--;
    q++;

}
printf("%s is palindrome",s);
}