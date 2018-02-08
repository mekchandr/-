
#include<stdio.h> 
int main()
{
int n,i,k=0;
printf("Enter a positive integer:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
k+=i; 
}
printf("%d",k);
}
