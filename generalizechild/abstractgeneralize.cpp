#include <stdio.h>
#include "abstractchild.h"
int main(int argc,char** argv)
{
  abstractchild ac;
  abstractparent* pap;
  pap = &ac;
  printf("Print abstract Function Result is %d\n",
	 pap->Result());
  return 0;
}
