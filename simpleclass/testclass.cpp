#include <stdio.h>
#include "simpleclass.h"
int main(int argc,char** argv)
{
  simpleclass sc;
  printf("Print Value from simpleclass = %d\n",sc.plus());
  return 0;
}
