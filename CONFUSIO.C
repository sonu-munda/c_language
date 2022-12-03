#include<stdio.h>
#include<conio.h>
void main()
{
long n=0,i=0;
clrscr();
printf("Your lucky no:");
scanf("%ld",&n);
for(i=0;n!=0;++i)
{
n=n/10;
printf(" %ld\n",n);
}
//printf(" %ld",n);
printf("my digits= %d\n",i);
if(i%2==0)
{
printf("Your number is in pair %d\n",i);
printf("And the length is %d\n",i);
printf("You can cut the no. into half");
}
else
{
printf("your number is not in pair %d\n",i);
printf("And the length is %d\n",i);
printf("You cannot cut the no. into half");
}
getch();
}
