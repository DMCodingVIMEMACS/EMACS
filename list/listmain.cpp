#include <stdio.h>
#include <string.h>
#include "CList.h"
int main(int argc,char** argv)
{
  CList kList;


  int iSizeofList =10;
  CList* pNext = &kList;

  for(int i=0;i<iSizeofList;i++)
    {
      CList* pData = new CList();
      pData->m_kData.m_ia = i;
      strcpy(pData->m_kData.m_szData,"test");      
      pNext->push_back(pData);
      pNext = pNext->m_pNext;
    }
  CList* pList = &kList;
  for(int i=0;i<iSizeofList;i++)
    {
      pList = pList->m_pNext;

      printf("Print Data pData[%d]= %s\n",
	     pList->m_kData.m_ia,pList->m_kData.m_szData);
      if(pList ==0)
	{
	  printf("Pos is Tail\n");
	}
    }
  return 0;
}
