#include<stdio.h>
int main(){
int n,arr[10],i,odd=0;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter the no.of elements:");
for(i=0;i<=n-1;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<=n-1;i++){
odd=odd^arr[i];
 
}
printf("The odd occurence elements:%d",odd);
}
