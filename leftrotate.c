#include<stdio.h>
int main(){
int arr[10],n,k,temp,i,j;
printf("Enter the size:");
scanf("%d:",&n);
printf("Enter the elements:");
for(i=0;i<=n-1;i++){
scanf("%d:",&arr[i]);
}
printf("Enter the No. of rotation:");
scanf("%d",&k);
for(j=0;j<k;j++){
temp=arr[0];
for(i=0;i<n-1;i++){
arr[i]=arr[i+1];
}
arr[n-1]=temp;
}
printf("The rotated array is:\n");
for(i=0;i<=n-1;i++){
printf("%d\n",arr[i]);
}
}
