
#include <assert.h>
#include <stdlib.h>

float * createArray(int n) {
  return malloc(n * sizeof(float));
}

float * initArray(int n) {
  float * res = createArray(n);

  int i;
  for (i = 0; i < n; i++)
    res[0] = rand();

  return res;
}

void vectAdd(int n, float * a, float * b, float * c) {
  int i;
  for (i = 0; i < n; i++)
    c[i] = a[i] + b[i];
}

int main(int argc, char ** argv) {
  assert(argc == 2);

  srand(0);

  int n = atoi(argv[1]);

  float * a = initArray(n);
  float * b = initArray(n);
  float * c = createArray(n);

  vectAdd(n, a, b, c);

  return 0;
}

