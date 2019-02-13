#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,remain,org=0;
printf("Enter the integer");
scanf("%d", &n);
org=n;
while(n!=0)
{
remain=n%10;
rev=rev*10+remain;
n/=10;
}
if(org==rev)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
