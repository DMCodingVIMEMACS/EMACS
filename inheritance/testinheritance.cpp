#include <stdio.h>
#include "child.h"
int main(int argc,char** argv)
{
  child c;
  printf("Print parent testfunction parent = %d\n",c.testfunctionparent());
  printf("Print child testfunction child = %d\n",c.testfunctionchild());

  return 0;
}
