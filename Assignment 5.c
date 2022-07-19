//Assignment 5 Sol 1//
/*
#include<stdio.h>
int main()
{
  int n,i;
  printf("How many times you want to print MySirG:");

  scanf("%d",&n);

  while(i<n)
  {
    printf("MySirG\n");
    i++;
  }
  printf("End");
  return 0;

}
*/

//Sol 2//
/*
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        ++i;
    }
    printf("\n");
    return 0;
}
*/

//Sol 3//
/*
#include <stdio.h>

int main()
{
    int i, start;
    printf("Enter starting value: ");
    scanf("%d", &start);
    for(i=start; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>

void main()
{
   int i,n;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe Odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i - 1);
   }
   return 0;

}
*/

//Sol 5//
/*
#include<stdio.h>
int main()
{
    int i,n;
    printf("Input number of terms :");
    scanf("%d",&n);
    printf("The odd numbers are in reverse order :");
    printf("\n");
    for (int i=n; i>=1;i--)
    {
        printf("%d\n",2 * i - 1);

    }
    return 0;
}
*/

//Sol 6//
/*
#include <stdio.h>

void main()
{
   int i,n;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe even numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i);
   }

}
*/

//Sol 7//
/*
#include<stdio.h>
int main()
{
    int i,x;
    printf("\nEnter the value of N");
    scanf("%d",&x);
    printf("\nPrinting first %d even number in reverse order.\n",x);
    for(i=x;i>=1;i--)
    {
    printf("%d\t",2*i);
    }
    return 0;
}
*/

//Sol 8//
/*
#include<stdio.h>
int main()
{
    int i,n;

     printf("Input number of terms : ");
   scanf("%d",&n);


    for(int i=1; i<=n;i++)
    {
        printf("square of %d is %d",i,i*i);

    }

    return 0;
}
*/

//Sol 9//
/*
#include<stdio.h>
int main()
{
    int i,n;

     printf("Input number of terms : ");
   scanf("%d",&n);


    for(int i=1; i<=n;i++)
    {
        printf("square of %d is %d",i,i*i*i);

    }

    return 0;
}
*/

//Sol 10//
#include <stdio.h>
int main()
{
    int num, i;
    printf (" Enter a number to generate the table in C: ");
    scanf (" %d", &num);

    printf ("\n Table of %d", num);

    for ( i = 1; i <= 10; i++)
    {
        printf ("\n %d * %d = %d", num, i, (num*i));
    }
    return 0;
}





