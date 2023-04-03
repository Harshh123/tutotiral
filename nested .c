#include <stdio.h>
void main()
{
int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
if (a>c)
{
printf("greater number=%d",a);
if(b=c)
printf("lowest number=%d",b);
}
else
{
printf("lowest number=%d",c);
}
}
printf("greater number=%d",a);
}