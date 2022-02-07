/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int n01,int n02);
int maximum(int n01,int n02);
int multiply(int n01,int n02);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int n01,int n02)
{
  if(n01>n02)
  {
    return n02;
  }
  else
  {
    return n01;
  }
}
int maximum(int n01,int n02)
{
  if(n01>n02)
  {
    return n01;
  }
  else
  {
    return n02;
  }
}
int multiply(int n01, int n02)
{
  return n01*n02;
}
