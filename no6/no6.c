#include <stdio.h>
#define N 40

typedef struct Plant{
      int X;
      int Y;
      int R;
}Plant;

int main(void){
  Plant plant[N];
  double dist_max;
  int n=3;
  
  dist_min=distance(plant[0],plant[1]);
  for(i=0;i<N-1;i++)
    if(dist_max<distance(plant[i],plant[i+1]))
      dist_max=distance(plant[i],plant[i+1]);
      
  return 0;
}

double distance(Point p1,Point p2){
  return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
}
