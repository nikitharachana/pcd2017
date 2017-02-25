#include <stdio.h>
int add(int n,int a[])
{
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
return sum;
}
int main()
{
int d;
int a[10]={0,1,2,3,4,5,6,7,8,9};
d= add(10,a);
printf("%d\n",d);
return 1;
}


