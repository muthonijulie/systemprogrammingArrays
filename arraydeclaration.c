#include<stdio.h>
int main(){
int  arr[6]= {10,20,30,40,50};
arr[2]=70;
printf("Elements in Array:");
int count;
 for(count=0;count<6;count++){
         printf("Elements are %d:",arr[count]);
}
return 0;
}
