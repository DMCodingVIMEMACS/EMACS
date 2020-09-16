#include <stdio.h>
#include <queue>
using namespace std;
int main(int argc,char** argv)
{
  queue<int> aQueue;
  aQueue.push(0);
  aQueue.push(1);
  aQueue.push(2);
  aQueue.push(3);
  aQueue.push(4);
  aQueue.push(5);
  aQueue.push(6);
  int iSize = aQueue.size();
  while(iSize >0)
    {
      int iValue = aQueue.front();
      printf("Print Queue Value = %d\n",iValue);
      aQueue.pop();
      iSize = aQueue.size();
    }
  return 0;
}
  
