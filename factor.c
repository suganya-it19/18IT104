#include<stdio.h>
void main()
{int a,n;
printf("enter the n value");
scanf("%d",&n);
printf("factors of %d:",n);
for(a=1;a<=n;a++)
if(n%a==0)
{
printf("%d\n",a);
}
}
