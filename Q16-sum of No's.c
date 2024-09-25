#include <stdio.h>
int main() 
{
  int i,n,sum=0;
printf("enter n to calc sum: ");
scanf("%d",&n);
  for(i=1;i<=n;i++){
    sum=sum+i;
  }
  printf("%d",sum);
  return 0;
}