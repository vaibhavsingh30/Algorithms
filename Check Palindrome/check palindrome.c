#include<stdio.h>
int rev(int n)
{int r=0;
while(n>0) {r=10*r+n%10; n/=10; };
return r;
}
int main ()
{int n;
printf("Enter the number whome you want to check as palindrome");
scanf("%d",&n);
rev(n)==n?printf("PALINDROME"):printf("NON PALINDROME");

return 0;
}
