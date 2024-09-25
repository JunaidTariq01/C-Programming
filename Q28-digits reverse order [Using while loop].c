#include <stdio.h>
int main() {
  int num,r;
  printf("enter any integer: ");
  scanf("%d",&num);
  while(num/10 !=0)
    {
      r=num%10;
      printf("%d",r);
      num=num/10;
    }
  printf("%d",num);
  return 0;
}