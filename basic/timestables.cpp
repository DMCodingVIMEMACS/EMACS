#include <stdio.h>
int main(int argc,char** argv)
{
     //2x2=4 3x2=6 4x2=4
     for(int k=0;k<5;k++)
     {
	  for(int i=2;i<=9;i++)
	  {
	       for(int j=2;j<=5;j++)
	       {
		    int jo=(j+k*4);
		    if(jo>19)
		    {
			 break;
		    }
		    printf("%d x %d = %d\t",jo,i,i*jo);
	       }
	       printf("\n");
	  }
	  printf("\n");
     }
     return 0;
}
