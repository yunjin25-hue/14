#include <stdio.h>
#include <stdlib.h>

//실습 1 

int main(int argc, char *argv[])
{
  char* pc=NULL;
  int i=0;
  
  pc=(char*)malloc(100*sizeof(char));
  
  if(pc==NULL){ //에러 핸들링 코드 
    printf("메모리 할당 오류\n");
    exit(1);
  }
  
  for(i=0; i<26; i++)
  {
      pc[i]='a'+i;
  }
  pc[i]=0;
  printf("%s\n",pc);
  free(pc);
  
  
  system("PAUSE");	
  return 0;
}
