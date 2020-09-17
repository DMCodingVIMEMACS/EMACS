#include <stdio.h>

// Compare Rock Scissor Paper

int Compare(int A,int B)
{
  int iRock = 0;
  int iScissor = 1;
  int iPaper = 2;
  
  if(( A == iRock) && ( B == iScissor))
    {
      return 1;
    }
  if(( A == iRock) && ( B == iPaper))
    {
      return -1;
    }
  if(( A == iScissor) && ( B == iRock))
    {
      return -1;
    }
  if(( A == iScissor) && ( B == iPaper))
    {
      return 1;
    }
  if(( A == iPaper) && ( B == iRock))
    {
      return 1;
    }
  if(( A == iPaper) && ( B == iScissor))
    {
      return -1;
    }
  return 0;
  
}

int main(int argc,char** argv)
{
  int iRock = 0;
  int iScissor = 1;
  int iPaper = 2;
  
  int iA;
  int iB;
  printf("Rock = 0, iScissor =1,iPaper =2\n");
  printf("Person A = ");
  scanf("%d",&iA);
  printf("Person B = ");
  scanf("%d",&iB);

  int iWin = Compare(iA,iB);

  if(iWin == 1)
    {
      printf("Win Person A\n");
    }
  else if(iWin == -1)
    {
      printf("Win Person B\n");
    }
  else
    {
      printf("Win Draw\n");
    }
    return 0;
}
