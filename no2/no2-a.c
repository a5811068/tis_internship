#include <stdio.h>
#define SIZE 100

int stack[SIZE]; //正の数のみ
int stp=-1;      //スタックポインタ

int main(void){
  
  return 0;
}

int empty(){
  if(sizeof(stack)==0)
    return 0;
  else
    return 1;
}

int peek(){
  if(stp==-1)
    return -1;
  return stack[stp];
}

int pop(){
  int data;
  
  if(stp==-1)
    return -1;
  data=stack[stp];
  stack[stp]=0;
  return data;
}

int push(int data){
  if(stp>=SIZE-1)
    return -1;
  stp++;
  stack[stp]=data;
  return 0;
}

int size(){
  return sizeof(stack)/(stp+1);
}
