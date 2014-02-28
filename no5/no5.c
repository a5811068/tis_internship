#include <stdio.h>
#define SIZE 100

void unsort(int *num,int *start,int *goal);

int main(void){
  int num[SIZE]={1,2,4,7,10,11,7,12,7,8,16,18,19};
  int i=0,start,goal,min,max,m,n;
  
  unsort(num,&start,&goal);
  //printf("start:%d,goal:%d\n",start,goal);
  
  if(goal>start){
    max=num[goal-1];
    min=num[start];
  }
  else{
    max=num[start];
    min=num[goal-1];
  }
  
  //printf("max:%d,min:%d\n",max,min);
  while(min>num[i])
    i++;
  m=i+1;
  i=0;
  
  while(max>=num[i])
    i++;
  n=i-1;
  
  printf("m=%d\nn=%d",m,n);
  
  return 0;
}

//ソートされていない最初の場所と最後の場所をセットする
void unsort(int *num,int *start,int *goal){
  int i=0;
  
  while(num[i+1]>num[i])
    i++;
  *start=i+1;
  i++;
  
  for(;i<12;i++)
    if(num[i+1]<num[i] && i!=SIZE-1)
      *goal=i+1;
}