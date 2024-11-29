#include<stdio.h>
int main(){
int  m,n,i,j,count;
printf("Enter the number:");
scanf("%d",&m);
printf("Enter the number:");
scanf("%d",&n);
for(i=m;i<=n;i++){
count=0;
for(j=2;j<=i/2;j++){
if(i%j==0){
count++;
}
}
if(count==0){
printf("%d",i);
}
}
}


