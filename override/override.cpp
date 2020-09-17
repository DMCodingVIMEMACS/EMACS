#include <stdio.h>

int function(int a)
{
  return a*a;
}
//override
int function(int a,int b)
{
  return a*b;
}

int main(int argc,char** argv)
{
  printf("Print Original Function = %d\n",function(10));
  printf("Print Override Function = %d\n",function(10,20));
  return 0;
}
