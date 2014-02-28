#include <stdio.h>

int main(void){
  int a,b;
  
  printf("%d\n",minus(5,2));
  printf("%d\n",multiply(3,-4));
  printf("%d\n",divide(-5,3));
  
  return 0;
}

int minus(int a, int b){
  return a+(~b+1);  //ビットを反転する
}

int multiply(int a, int b){
  int i,flug,result=0;
  
  flug=sign(a,b);
  a=abs(a);
  b=abs(b);
  
  //絶対値の大きいほうをどんどん足していく
  if(b<a){
    for(i=0;i<abs(b);i++)
      result+=a;
  }
  else
    for(i=0;i<abs(a);i++)
      result+=b;
  
  if(flug==0)
    return result;
  else
    return -result;
}

int divide(int a, int b){
  int n,flug,result=0;
  
  flug=sign(a,b);
  a=abs(a);
  b=abs(b);
  
  n=b;  //nにbの値を保存しておく
  //aの中にbが何個あるか数える
  while(a>n){
    n+=b;
    result++;
  }
  
  if(flug==0)
    return result;
  else
    return -result;
}

int sign(int a, int b){

  if(a>0 && b>0 || a<0 && b<0)
    return 0;
  else
    return 1;
}
