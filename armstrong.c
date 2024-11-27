#include <stdio.h>

int main() {
    int n,r,sum=0,t;
    printf("\n Enter a number:");
    scanf("%d",&n);
    t=n;
    printf("\nThe given number is = %d",n);
    while(n>0)
    {
    r = n%10;
    sum = sum+(r*r*r);
    n = n/10;
    }
    if(t==sum)
  { 
        printf("\n%d is an Armstrong number",t);
}
else
{
    printf("\n%d is not an Armstrong number",t);
}
return 0;
}

 /* OUTPUT:
Enter a number:371

The given number is = 371
371 is an Armstrong number*/ 
