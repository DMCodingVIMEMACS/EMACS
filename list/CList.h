#pragma once
#include "CData.h"

class CList
{
 public:
  CList();
  ~CList();
  void push_back(CList* pData);
  void pop_back();
  void SetHeader(CList* pData);
 CData m_kData;
  CList* m_pNext;
  CList* m_pHead;
};

