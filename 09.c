#include<stdio.h>
#include<conio.h>
int ncr(int ,int );
int fact(int );
int npr(int , int );


void main()
{
int n,r;
printf("Enter n and r: \n");
scanf("%d%d",&n,&r);
printf("The value of %dC%d is %d and value of %dP%d is %d",n,r,ncr(n,r),n,r,n,npr(n,r));
}

int ncr(int n,int r){

if(r==0|r==n)
  return 1;
else
  return ncr(n-1,r-1)+ncr(n-1,r);
  }

  int fact(int n)
{
    if (n == 1)
        return 1;

        return n*fact(n-1);
}

int npr(int n, int r)
{
    return fact(n)/fact(n-r);
}


