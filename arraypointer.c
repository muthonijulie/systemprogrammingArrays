#include<stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
int* ptr=&arr[0];
printf("Address stored in array name:%p\nAddress of"
"1st array element:%p\n",
arr,&arr[0]);
printf("Array elements using pointer:");
for(int i=0;i<5;i++){
     printf("%d\n",*ptr++);
}
return 0;
}
