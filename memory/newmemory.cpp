#include <stdio.h>
int main(int argc,char** argv)
{
  const int iSize = 10;
  int* pi = new int[iSize];
  char* pc = new char[iSize];
  float* pf = new float[iSize];
  double* pd = new double[iSize];
  for(int i=0;i<iSize;i++)
    {
      pi[i]=i;
      pc[i]='A'+i;
      pf[i]=i;
      pd[i]=i;
    }
  for(int i=0;i<iSize;i++)
    {
      printf("pi[%d] = %d,pc[%d] = %c, pf[%d] = %f,pd[%d] = %lf\n"
	     ,i,pi[i],i,pc[i],i,pf[i],i,pd[i]);
    }
  delete [] pi;
  delete [] pc;
  delete [] pf;
  delete [] pd;
    
  return 0;
}
     
