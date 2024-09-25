#include<stdio.h>
#include<math.h>
//to find the roots of a quardratic eqn
int main (){
double a,b,c,d,e,f;
printf("Enter the coefficients of eqn\n");
scanf("%lf %lf %lf", &a, &b, &c);
d=(b*b)-(4*a*c);
printf("%lf\n",d);
if (a!=0){
if (d>0){
    e=(-b+sqrt(d))/2*a ;
    f=(-b-sqrt(d))/2*a ;
printf("Roots are %lf %lf",e,f);
}
else if (d==0){
    e=(-b)/2*a ;
printf("Roots are Real and equal i.e %lf",e);
}
else
printf("Roots are imaginary");
}
else printf("Its not a quadratic eqn");
return 0;

}