#include<stdio.h>
struct student {
    int roll_number;
    char name[50];
    float marks;
    char grade;
};
int main(){
struct student s;
s.roll_number = 9;
s.name[50] ="junaid";
s.marks=200;
s.grade='A';
printf("%d %s %f %c",s.roll_number,s.name, s.marks,s.grade);


}
