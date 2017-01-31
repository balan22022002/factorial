#include <stdio.h>
//#include <conio.h>
int main ()
{
//clrscr();
int n,i;
float factorial=1;
printf("\n Enter the number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
factorial=factorial*i;
}
printf("\n The factorial of the number is %e",factorial);
//system ("PAUSE");
return 0;
}
