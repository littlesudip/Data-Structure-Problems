#include<stdio.h>
int fibo(int n){
if(n==0){
    return 0;
}
else if(n==1){
    return 1;
}
else if(n==2){
    return 1;
}
else
return fibo(n-1)+fibo(n-2);
}
int main(){

int n;
printf("Enter the nth Fibonacci number you want to find out: \n");
scanf("%d",&n);
int F;
F=fibo(n);
printf("%d",F);
}

