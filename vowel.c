#include<stdio.h>
#include<math.h>
int main(){
//vowel or consonant

char vol,con;
printf("Enter any lower case Alphabet to Check: ");
scanf("%c",&vol);
if(vol>=97 &&vol<=122)

if(vol=='a'||vol=='e'||vol=='i'||vol=='o'||vol=='u')
printf("vowel");
else
printf("consonent");

else 
printf("not valid alphabet");


return 0;
}