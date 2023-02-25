#include<stdio.h>
#include<math.h>
int main()
{
   int num,i,FLAG=1,step=0;
   printf("Enter any Positive Number : ");
   scanf("%d",&num);
   for(i=2;i<sqrt(num);i++)
   {
      if(num%i == 0)
         {
            FLAG = 0;
            break;
         }
      step++;
   }
   if(FLAG == 1)
   {
      printf("%d is a prime number.\n",num);
   }
   else
   {
      printf("%d is not a prime number.\n",num);
      step++;
   }
   printf("Number of steps: %d",step);
   return 0;
}