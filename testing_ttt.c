#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  //fibbionachi series
  long a = 1;
  long b = 1;
  long limit = 1;

  do
  {
    printf("List fibbionachi till nth element(input n): ");
    scanf("%ld", &limit);
  }while(limit < 0);

  for(long i = 0; i <= limit; ++i)
  {
    printf("%ld\n", a);
    a += b;
    a ^= b;
    b ^= a;
    a ^= b;
  }


  return 0;
}