#include<stdio.h>
int main(){
int arr[10][10],i,j,n,m;
printf("Enter no.of rows & columns ");
scanf("%d %d",&m,&n);
printf("Enter the elememts ");
for(i=0;i<=m-1;i++){
    for(j=0;j<n;j++){
        scanf("%d ",&arr[i][j]);
    }
}
for(i=0;i<=m-1;i++){
    for(j=0;j<=n-1;j++){
        printf("%d ",arr[i][j]);
    }
}

return 0;
}