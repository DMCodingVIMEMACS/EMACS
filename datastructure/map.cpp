#include <stdio.h>
#include <map>
#include <string>
using namespace std;
int main(int argc,char** argv)
{
  map<string,int> aMap;
  aMap.insert(make_pair("a",1));
  aMap.insert(make_pair("b",2));
  aMap.insert(make_pair("c",3));
  aMap.insert(make_pair("d",4));
  aMap.insert(make_pair("e",5));
  printf("Print aMap %s = %d\n","a",aMap.find("a")->second);
  printf("Print aMap %s = %d\n","b",aMap.find("b")->second);
  printf("Print aMap %s = %d\n","c",aMap.find("c")->second);
  printf("Print aMap %s = %d\n","d",aMap.find("d")->second);
  printf("Print aMap %s = %d\n","e",aMap.find("e")->second);
  return 0;
}
	  
