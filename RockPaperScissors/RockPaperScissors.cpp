#include <stdio.h>
int Compare(int iA,int iB)
{
  int iRock =0;
  int iPaper =1;
  int iScissors =2;
  //Return 1 win A , -1 Win B, 0 Draw
  if(iA == iB)
    {
      return 0;
    }
  if((iA == iRock) && (iB == iPaper))
    {
      return -1;
    }
  if((iA == iRock) && (iB == iScissors))
    {
      return 1;
    }
  if((iA == iPaper) && (iB == iScissors))
    {
      return 1;
    }
  if((iA == iPaper) && (iB==iRock))
    {
      return -1;
    }
  if((iA == iScissors) && (iB == iRock))
    {
      return -1;
    }
  if((iA == iScissors) && (iB ==iPaper))
    {
      return 1;
    }
  return 0;
}
//int Compare(int iA, int iB);
int main(int argc,char** argv)
{
  int iPersonA=0;
  int iPersonB=0;
  printf("Rock =0, Paper =1, Scissors=2\n");
  printf("Person A = ");
  scanf("%d",&iPersonA);
  
  printf("Person B = ");
  scanf("%d",&iPersonB);
  int  iWin = Compare(iPersonA,iPersonB);
  if(0 == iWin)
    {
      printf("Draw Game\n");
    }
  if(1 == iWin)
    {
      printf("Win Person A\n");
    }
  if(-1== iWin)
    {
      printf("Win Person B\n");
    }
  return 0;
}
	
  			    
      
