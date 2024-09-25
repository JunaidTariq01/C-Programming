#include <stdio.h>
#include<math.h>
int main() {
 int i,n,x;
 printf("Enter n: ");
  scanf("%d",&n);
  for(i=2;i<=n;i++){
    x=pow(x,2);
    printf("%d",x);
  }
  return 0;
}