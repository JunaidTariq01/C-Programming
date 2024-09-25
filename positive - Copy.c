#include<stdio.h>
#include<math.h>
int main(){
float post;
printf("Enter any number to check: ");
scanf("%f",&post);
if (post>=1)
printf("%f is an Positive number",post);
else if(post==0)
printf("Zero is neither +ve nor -ve");
else if(post<=-1)
printf("%f is an Negative Number",post);
else
printf("ERROR");

char alp;
printf("Enter any Input to Check: ");
scanf("%c",&alp);
if(alp>='A'&&alp<='Z'||alp>='a'&&alp<='z')
printf("%c is an Alphabet",alp);
else
printf("Entered Input is not an Alphabet");


return 0;

}