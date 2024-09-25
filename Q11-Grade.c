#include<stdio.h>
int main()
{
  int a,b;
  float P;
  printf("Enter marks obtained and Max marks");
  scanf("%d%d",&a,&b);
  P=((a/b)*100);
  if(P>=90)
    printf("Grade is O");
  else if(P<90 && P>=80)
    printf("Grade is A");
  else if(P<80 && P>=70)
    printf("Grade is B");
  else if(P<70 && P>=60)
    printf("Grade is C");
  else if(P<60 && P>=50)
    printf("Grade is D");
  else if(P<50 && P>=40)
    printf("Grade is E");
  else 
    printf("Better Luck Next Time");
  return 0;

}