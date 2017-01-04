#include <stdio.h>

#include "bar.h"

int main(int argc, char **argv) {
  int x = bar();

  printf("bar is %d\n", x);
}
