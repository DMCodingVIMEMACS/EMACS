#include "simpleclass.h"
//construct
simpleclass::simpleclass()
{
  m_ia = 10;
  m_ib = 20;
}
simpleclass::~simpleclass()
{

}
int simpleclass::plus()
{
  return m_ia+m_ib;
}
