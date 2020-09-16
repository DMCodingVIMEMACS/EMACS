#include <stdio.h>
int main(int argc,char** argv)
{
     //Dim size must be constant
     const int iDimSize = 10;
     int iDim1D[iDimSize];
     iDim1D[0] = 0;
     iDim1D[1] = 1;
     iDim1D[2] = 2;
     iDim1D[3] = 3;
     iDim1D[4] = 4;
     iDim1D[5] = 5;
     iDim1D[6] = 6;
     iDim1D[7] = 7;
     iDim1D[8] = 8;
     iDim1D[9] = 9;
     for(int i=0;i<iDimSize;i++)
     {
	  printf("Print iDim1D[%d] = %d \n",i,iDim1D[i]);
     }
     return 0;
}
  
