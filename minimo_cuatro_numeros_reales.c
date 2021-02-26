#include<stdio.h>

float minimo_2(float x, float y){
  if(x < y){
    return x;
  }
  return y;
}
float minimo_4(float a, float b, float c, float d){
  float t1 = minimo_2(a,b);
  float t2 = minimo_2(c,d);
  return minimo_2(t1,t2);
}
int main(){
  float a,b,c,d;
  scanf("%f%f%f%f",&a,&b,&c,&d);
  printf("El minimo es: %f",minimo_4(a,b,c,d));
return 0;
}
