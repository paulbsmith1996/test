#include <stdio.h>
#include <stdlib.h>

#include "bar.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("foo <number>\n");
    exit(1);
  } else {
    int input = atoi(argv[1]);
    int output = bar(input);
    printf("bar is %d\n", output);
  } 
}
