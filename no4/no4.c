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
  int i,result=0;
  
  //大きいほうをどんどん足していく
  if(b<a){
    for(i=0;i<abs(b);i++)
      result+=a;
  }
  else
    for(i=0;i<abs(a);i++)
      result+=b;
  
  return result;
}

int divide(int a, int b){
  int n,result=0;
  
  n=b;  //nにbの値を保存しておく
  //aの中にbが何個あるか数える
  while(abs(a)>abs(n)){
    n+=b;
    result++;
  }
  
  return result;
}
