#include<stdio.h>
#include<math.h>

int main(){
    int q;
    printf("Press 1 to calc sq root & 2 for square : ");
    scanf("%d",&q);
if (q==1)
{
float a;
printf("Enter any no to calc sq root : ");
scanf("%f",&a);
float sq = pow(a,0.5);
printf ("Sq root is %f", sq);
}
else if (q==2)
{
float b;
printf("Enter any no to calc square : ");
scanf("%f",&b);
float sqa = pow(b,2);
printf ("Sq root is %f", sqa);
}
else
(printf("you entered wrong no !!!"));
return 0;
}