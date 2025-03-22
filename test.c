#include<stdio.h>
void main(){
int a[4];
printf("enter the elements of the array:\n");
for(int i=0;i<4;i++){
scanf("%d",&a[i]);}
printf("enter target value:");
int n,c=0;
scanf("%d",&n);
for(int i=0;i<4;i++){
for(int j=i+1;j<4;j++){
if((a[i]+a[j])==n){
c=1;
printf("%5d %5d\n",a[i],a[j]);
}}}
if(c==0)
printf("sorry no indices found");
else
printf("given above are the indices of the target value:");
}
