#include <stdio.h>
#include <string.h>
#define N 10

int main(void){
  char str[N]={'\0'};
  
  fgets(str,N,stdin);
  
  if(duplicate_check(str)==0)
    printf("true");
  else
    //printf("false");
  
return 0;
}

//strに文字が重複しているかどうか確かめる
//重複していれば、１を返し、重複していなければ、０を返す
int duplicate_check(char *str){
  char c;
  int i,j;
  
  for(i=0;i<N;i++){
    c=str[i];
    printf("c:%c\n",c);
    for(j=0;j<N && j!=i;j++){
      printf("str[%d]:%c\n",j,str[j]);
      if(str[j]==c)
        return 1;
    }
  }
  return 0;
}
