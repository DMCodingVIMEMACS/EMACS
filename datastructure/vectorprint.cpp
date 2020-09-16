#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc,char** argv)
{
     int iDimSize = 10;
     vector<int> aDimVector;
     for(int i=0;i<iDimSize;i++)
     {
	  aDimVector.push_back(i);
     }
     vector<int>::iterator itrDimVector = aDimVector.begin();
     for(;itrDimVector!=aDimVector.end();itrDimVector++)
     {
	  printf("Print Vector Value %d\n",*itrDimVector);
     }
     return 0;
}
       
