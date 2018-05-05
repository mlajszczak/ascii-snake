#include <stdio.h>
#include <stdlib.h>

float avg(int numc, int nums[]) {
  int sum = 0;
  for (int i = 0; i < numc; ++i) {
    sum += nums[i];
  }
  return sum / (float) numc;
}

void avg_with_stack() {
  int c;
  scanf("%d", &c);

  int t[c];

  for (int i = 1; i <= c; ++i) {
      t[i - 1] = i;
  } 

  printf("%f\n", avg(c, t));
}

void avg_with_heap() {
  int c;
  scanf("%d", &c);

  int *t = malloc(sizeof(int) * c);

  for (int i = 1; i <= c; ++i) {
      t[i - 1] = i;
  } 

  printf("%f\n", avg(c, t));

  free(t);
}

int main(int argc, char const *argv[]) {
  avg_with_stack();
  avg_with_heap();
  return 0;
}
