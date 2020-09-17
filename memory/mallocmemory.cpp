#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
int main(int argc,char** argv)
{
  int iSize = 10;
  int* ai = (int*) malloc(sizeof(int)*iSize);
  char* ac = (char*) malloc(sizeof(char)*iSize);
  float* af = (float*) malloc(sizeof(float)*iSize);
  double* ad = (double*) malloc(sizeof(double)*iSize);
  for(int i=0;i<iSize;i++)
    {
      ai[i] =i;
      ac[i] = 'A'+i;
      af[i] = i;
      ad[i] = i;
    }
  for(int i=0;i<iSize;i++)
    {
      printf("Print Array ai[%d] = %d,ac[i] = %c,af[%d] = %f, ad[%d] = %lf\n",
	     i,ai[i],i,ac[i],i,af[i],i,ad[i]);
    }
  free(ai);
  free(ac);
  free(af);
  free(ad);
  return 0;
}
