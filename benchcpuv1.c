#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
  /* Start of the program */
  char program_version[] = "v0.0.3";
  int cycles = 0;

  /* Introduction */
  printf("Welcome to benchcpu %s\n", program_version);
  /* Main code goes here! */
  clock_t t;
  t = clock();
  for(cycles = 0; cycles < 10000; cycles++){
    printf("%d\n", cycles);
  }
  t = clock() - t;
  double elapsed = ((double)t)/CLOCKS_PER_SEC;

  /* End */
  printf("ST task done in %d cycles in %fs\n", cycles, elapsed);

  return 0;
}
