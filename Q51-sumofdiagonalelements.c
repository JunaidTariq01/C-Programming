#include<stdio.h>
int main(){
int i,j,m,sum=0;
printf("Enter the no. of rows ");
scanf("%d",&m);
int a[m][m];
printf("Enter Elements ");
for(i=0;i<m;i++){
    for(j=0;j<m;j++){
        scanf(" %d",&a[i][j]);
        if(i==j)
        sum=sum + a[i][j];
    }
}
printf("Matrix is : \n");
for(i=0;i<m;i++){
    for(j=0;j<m;j++){
        printf(" %d",a[i][j]);
    }
    printf("\n");
}
printf("sum od diag is %d",sum);

return 0;
}