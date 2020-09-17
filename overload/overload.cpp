#include <stdio.h>
//#include "P.h"
#include "C.h"
int main(int argc,char** argv)
{
  P a;
  C b;
  printf("Print a.function() = %d, b.Function() = %d\n",a.function(),b.function());
  return 0;
}
