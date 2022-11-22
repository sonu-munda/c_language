#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,sum=0;
clrscr();
printf("Your fav no :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("The outcome of your no. :\n");
for(i=1;i<=n;i++)
{
printf(" %d + ",i);
}
printf("= %d",sum);
getch();
}