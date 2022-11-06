#include <stdio.h>
int main() 
{
   int num, org, rem, mul = 1, m, n = 0, sum = 0;
   printf("Enter the number: ");
   scanf("%d", &num);
   org = num;
   int x = num;

   //checking the no of digits
   while (num!=0)
   {
	    num = num/10;
	    n++;
   }
   printf("The digits are %d\n", n);

   //loop
   while (x!=0)
   {
		m = x%10;
	    //calculating a^n
	    int i = 1;
	    mul = 1;
		while (i<=n)
	    {
	        mul = mul * m;
	        printf("mul = %d\n", mul);
	        i++;
	    }
	    sum = sum + mul;
	    printf("sum = %d\n", sum);
	    x = x/10;
	    printf("X = %d\n", x);
   }
   
   printf("\n%d\n", sum);
   
   if (org==sum)
    printf("Armstrong");
   else
   printf("Nope");

   return 0;
}   
