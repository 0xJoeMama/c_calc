#include <stdio.h>
int main(void) {
  int a;
  int b;
  printf("Please enter the first number: ");
  scanf("%d", &a);
  printf("Please enter the second number: ");
  scanf("%d", &b);

  printf("The sum of the 2 numbers is: %d\n", a + b);
  return 0;
}
