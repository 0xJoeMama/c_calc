#include <stdbool.h>
#include <stdio.h>
#include <string.h>

static bool read(const char *message, int *x) {
  printf("%s", message);
  int res = scanf("%d", x);
  switch (res) {
  case EOF:
    fprintf(stderr, "encountered eof\n");
    return false;
  case 0:
    fprintf(stderr, "invalid number\n");
    return false;
  }

  return true;
}

int main(void) {
  char op;

  int a;
  int b;
  int res;

  for (;;) {
    printf("Choose an operation(one of + * - /): ");
    if (scanf(" %c", &op) == EOF) {
      fprintf(stderr, "encountered end-of-file\n");
      return 1;
    }

    if (!strchr("+-/*", op)) {
      fprintf(stderr, "invalid operation: %c \n", op);
      return 1;
    }

    if (!read("Enter a: ", &a))
      return 1;
    if (!read("Enter b: ", &b))
      return 1;

    switch (op) {
    case '+':
      res = a + b;
      break;
    case '-':
      res = a - b;
      break;
    case '*':
      res = a * b;
      break;
    case '/':
      if (b == 0) {
        fprintf(stderr, "cannot divide by 0\n");
        continue;
      }

      res = a / b;
      break;
    }

    printf("The value of %d %c %d is: %d\n", a, op, b, res);
  }

  return 0;
}
