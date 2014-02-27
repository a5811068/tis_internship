#include <stdio.h>
#define SIZE 100

int stack1[SIZE]; //正の数のみ　入るだけ
int stack2[SIZE]; //正の数のみ 出すだけ
int stp1=-1;      //スタックポインタ1
int stp2=-1;      //スタックポインタ2

int main(void){
  
  return 0;
}

void add(int data){
  if(stp1>=SIZE-1 && stp2>=
}

int remove(){
}

int peek(){
  if(stp==-1)
    return -1;
  return queue[stp];
}

int pop(){
  int data;
  
  if(stp1==-1)
    return -1;
  data=stack[stp1];
  stack[stp1]=0;
  return data;
}

int push(int data){
  if(stp2>=SIZE-1)
    return -1;
  stp2++;
  stack[stp2]=data;
  return 0;
}

int size(){
  return sizeof(stack)/(stp+1);
}



/*
#include <stdio.h>
#define SIZE 100

int queue[SIZE]; //正の数のみ
int eqp=-1;      //エンキューポインタ
int dqp=0;      //デキューポインタ

int main(void){
  
  return 0;
}

int add(int data){
  if(eqp>=SIZE-1)
    return -1;
  eqp++;
  queue[eqp]=data;
  return 0;
}

int peek(){
  if(eqp==-1)
    return -1;
  return queue[dqp];
}

int remove(){
  if(eqp==-1)
    return -1;
  data=queue[dqp];
  stack[dqp]=0;
  dqp++;
  return data;
}

int size(){
  return sizeof(queue)/(eqp+1);
}
*/