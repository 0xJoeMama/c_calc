#include <stdio.h>
int main(void) {
  int number;

  printf("Give me nomber: ");
  fflush(stdout);
  scanf("%d", &number);
  printf("I just got %d\n", number);

  return 0;
}
