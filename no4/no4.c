#include <stdio.h>

int minus(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int sign(int a, int b)

int main(void){
  int a,b,num;  //numはどの演算子を使うかどうかに使用する
  
  //演算子の選択肢
  printf("1.minus 2.multiply 3.divide\n");
  
  //a,b,operatorの入力部分
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  printf("operator:");
  scanf("%d",&num);
  
  //減算
  if(num==1)
    printf("result:%d\n",minus(a,b));
  //乗算
  else if(num==2)
    printf("result:%d\n",multiply(a,b));
  //0で割らない除算
  else if(num==3 && b!=0)
    printf("result:%d\n",divide(a,b));
  //0で割る除算
  else
    printf("0で割ることは出来ません。\n");
  
  return 0;
}

int minus(int a, int b){
  return a+(~b+1);  //ビットを反転する
}

int multiply(int a, int b){
  int i,flag,result=0;
  
  //flagには結果の符号を入れておき
  //a,bは今後絶対値だけで考えていく
  flag=sign(a,b);
  a=abs(a);
  b=abs(b);
  
  //絶対値の大きいほうをどんどん足していく
  if(b<a){
    for(i=0;i<b;i++)
      result+=a;
  }
  else
    for(i=0;i<a;i++)
      result+=b;
  
  //結果が正なら
  if(flag==0)
    return result;
  else
    return -result;
}

int divide(int a, int b){
  int n,flag,result=0;
  
  //flagには結果の符号を入れておき
  //a,bは今後絶対値だけで考えていく
  flag=sign(a,b);
  a=abs(a);
  b=abs(b);
  
  n=b;//nにbの値を保存しておく
  //aの中にbが何個あるか数える
  while(a>n){
    n+=b;
    result++;
  }
  
  //結果が正なら
  if(flag==0)
    return result;
  else
    return -result;
}

//結果の符号を返す関数
//正なら0を、負なら1を返す
int sign(int a, int b){
  //２つの数がどちらも正の場合もしくは負の場合
  if(a>0 && b>0 || a<0 && b<0)
    return 0;
  else
    return 1;
}
