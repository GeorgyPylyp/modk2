#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
int i;
int n;
int a1=0;
int a2 = 0;
const int  Low=-100, High=200;
srand(time(0));
printf("\n кількість елементів масиву n=");
scanf("%d",&n); 
int a[n][n];
a[n][n]=cos(i*i+n);
for (int i = 0; i < n; i++) {
for (int j = 1; j < n; j++) {
  
a[i][j] = Low + rand() % High;
printf("%d\t", a[i][j]);
if (a[i][j] > 0) {
a1++;}
 if (a[i][j] < 0) {
a2++;}
 }
 printf("\n");
}
printf("Кількість додатніх елементів: %d\n", a1);
printf("Кількість відємних елементів: %d\n", a2);
  return 0;
}