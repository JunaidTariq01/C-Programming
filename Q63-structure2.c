#include<stdio.h>
struct student{
    int rollno;
    float marksobt;
    float totalmarks;
};
int main(){
struct student s[100];
int n;
printf("Enter the no of students ");
scanf("%d",&n);
for(int i=0;i<n;i++){
 printf ("Enter rollno of student%d ",i+1);
 scanf("%d",&s[i].rollno);
 printf("Enter marks obtained");
 scanf("%f",&s[i].marksobt);
  printf("Enter total marks ");
 scanf("%f",&s[i].totalmarks);
}





}