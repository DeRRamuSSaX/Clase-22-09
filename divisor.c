#include <stdio.h>
#include <stdlib.h>

//pendiente: forma recursiva
// int div_r(int n) {
//   int i = 0;
//   if ((n % i) == 0) {
//     return i;
//   }
// }

int divisor(int n) {
  int i = 1;
  while (i <= n) {
    if ((n % i) == 0) printf("%d\n", i);
    i++;
  }
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  // divisor(n);
  printf("%d\n", div_r(n));
  // div_r(n);
  return 0;
}
