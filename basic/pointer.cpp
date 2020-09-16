#include <stdio.h>
int main(int argc,char** argv)
{
  int a=10;
  int b=20;
  int* pa=&a;
  int* pb=&b;
  printf("Print Value a %d\n",a);
  printf("Print Value b %d\n",b);
  printf("Print Value %lu\n",(unsigned long)pa);
  printf("Print Value %lu\n",(unsigned long)pb);
  printf("Print Value from Pointer a %d\n",(int)*pa);  
  printf("Print Value from Pointer b %d\n",(int)*pb);
  return 0;
}
