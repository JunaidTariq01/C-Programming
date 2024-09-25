#include<stdio.h>
void sort(int *q,int size);
int main(){
int a[100],n,i;
int *p;
printf("Enter the size of array ");
scanf("%d",&n);
printf("Enter the elements  ");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
p = &a[100];
printf("\n Before swapping ");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
sort(p,n); 
printf("\n After swapping  ");
for (i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
void sort(int *q,int size)
{
    int j,i,c,*r;
    r=q;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(*q> *(q+1))
            {
                c=*q;
                *q= *(q+1);
                *(q+1)=c;
            }
            q++;
        }
        q=r;
    }
}