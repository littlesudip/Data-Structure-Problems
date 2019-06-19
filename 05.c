#include<stdio.h>
int p(int b,int n){
if(n==0){
    return 1;
}

else
return b*p(b,n-1);
}
int main(){

int n,b;
printf("Enter the base and power: \n");
scanf("%d%d",&b,&n);
int F;
F=p(b,n);
printf("%d",F);
}
