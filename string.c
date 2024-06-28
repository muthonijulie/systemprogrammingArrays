#include<stdio.h>
#include<string.h>
int main(){
char dest[100]="Welcome to our";
char src[100]="\tsystem programming class";
strcat(dest,src);
printf("Concatenated string is:%s",dest);
return 0;
}
