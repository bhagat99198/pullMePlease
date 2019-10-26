#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main() {
  int a = 10;
  int b = 20;
  int sum = add(a,b);
  printf("%d\n",sum);
  int diff = sub(a,b);
  printf("%d\n",diff);
 }
 
 int sub(int a, int b) {
   int result = b - a;
   return result;
 }
 int add(int a, int b) {
  int result = a + b;
  return result;
}
