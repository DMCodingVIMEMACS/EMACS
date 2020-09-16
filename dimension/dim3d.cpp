#include <stdio.h>
int main(int argc,char** argv)
{
     //DimSize is must be constant
     const int iDimSize =10;
     int iDim3D[iDimSize][iDimSize][iDimSize];
     for(int k=0;k<iDimSize;k++)
     {
	  for(int j=0;j<iDimSize;j++)
	  {
	       for(int i=0;i<iDimSize;i++)
	       {
		    iDim3D[k][j][i] = k*iDimSize*iDimSize + j*iDimSize +i;
	       }
	  }
     }
     //Print Value Same As assigned
     for(int k=0;k<iDimSize;k++)
     {
	  for(int j=0;j<iDimSize;j++)
	  {
	       for(int i=0;i<iDimSize;i++)
	       {
		    printf("Print Dimension 3D Value iDim3D[%d][%d][%d] = %d\n",
			   k,j,i,iDim3D[k][j][i]);
	       }
	  }
     }
     return 0;
}
  
	 
