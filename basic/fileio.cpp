#include <stdio.h>
int main(int argc,char** argv)
{
  //Read
  FILE* fp = fopen("test.txt","rb");
  fseek(fp,0,SEEK_END);
  long ilSize = ftell(fp);
  printf("File Size = %ld\n",ilSize);
  char szData[260] = {0};
  fseek(fp,0l,SEEK_SET);
  fread(szData,sizeof(char),ilSize,fp);
  printf("%s\n",szData);
  fclose(fp);
  //Write
  FILE* fpw = fopen("testwrite.txt","wb+");
  fprintf(fp,"Hello File Write C!\n");
  fclose(fpw);
  return 0;
}
