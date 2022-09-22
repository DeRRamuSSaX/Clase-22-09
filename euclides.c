#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
  int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}

int gcd_r(int a, int b){
  if (b == 0) return a;
  else        return gcd_r(b,a%b);
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  // printf("%d\n", gcd(a,b));
  printf("%d\n", gcd_r(a,b));
  return 0;
}
