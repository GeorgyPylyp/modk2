#include <stdio.h>
#include <math.h>
int main(){
float sum=0;
int a1=0;
int n;
int np=0;
printf("\n кількість елементів масиву n=");
scanf("%d",&n);
int a[n];
for(int i = 0; i < n; i++){
 printf(" a[%d]=", i);
 scanf("%d", &a[i]);
}
  printf("необхідні елементи масиву\n");
for (int i = 0; i < n; i++) {
if ((int)a[i] % 2 != 0) {
 sum += a[i];
 printf("\t%d", a[i]);
 np=1;
 }
}if(np){
  printf("\nСума непарних елементів масиву: %lf\n", sum);}
  else  {
  printf("\nв массиві немає непарних значень");}
  return 0;
}