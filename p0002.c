#include <stdio.h>

int main(int argc, char *argv[]) {
  unsigned int sum = 0;

  int curr = 2;
  int prev = 1;

  do {
    // update sum by adding even fib numbers
    if(curr%2 == 0)
      sum += curr;

    // calculate next value
    int next = curr + prev;
    prev = curr;
    curr = next;
  } while(curr <= 4000000);

  printf("Solution: %u\n", sum);

  return 0;
}
