#include <stdio.h>
int main(int argc,char** argv)
{
  int iDimSize1D = 3;
  int iDimSize2D = 5;
  
  int** ppiDim2D = new int*[iDimSize2D];
  for(int i=0;i<iDimSize2D;i++)
    {
      ppiDim2D[i] = new int[iDimSize1D];
    }
  //Assign
  for(int j=0;j<iDimSize2D;j++)
    {
      for(int i=0;i<iDimSize1D;i++)
	{
	  ppiDim2D[j][i] = j* iDimSize1D +i; 
	}
    }
   for(int j=0;j<iDimSize2D;j++)
    {
      for(int i=0;i<iDimSize1D;i++)
	{
	  printf("Print Assign iDim2D[%d][%d] = %d \n",j,i,ppiDim2D[j][i]);
	}
    }
    for(int i=0;i<iDimSize2D;i++)
    {
      delete ppiDim2D[i];
    }
    delete [] ppiDim2D;
   return 0;
}
