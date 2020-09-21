#include "CList.h"

CList::CList()
{
  //if Tail   m_pNext =0; 
  m_pNext = 0;
  m_pHead = this;
}
CList::~CList()
{
  m_pNext =0;
}
void CList::SetHeader(CList* pData)
{
  m_pHead = pData;
}
void CList::push_back(CList* pData)
{
  m_pNext =pData;
  pData->SetHeader(m_pHead);
}
void CList::pop_back()
{
  CList* pPos = this->m_pHead;
  CList* pPrev = pPos;
  while(0 != pPos)
    {

      pPrev= pPos;
      pPos = pPos->m_pNext;
    }
  pPrev->m_pHead = 0;
  
  
}


