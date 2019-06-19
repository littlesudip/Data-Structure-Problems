#include<stdio.h>
int pr(int n){
if(n<1){
    return n;
}

return n+pr(n-1);
}
int main(){

int n;
scanf("%d",&n);
int sum;
sum=pr(n);
printf("Sum of numbers from n to 1 is: \n");
printf("%d ",sum);
}
