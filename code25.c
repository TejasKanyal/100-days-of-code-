#include <stdio.h>

int main() {

  char op;
  float first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter frist operands: ");
  scanf("%f", &first);
  printf("Enter second operands: ");
  scanf("%f", &second);


  switch (op) {
    case '+':
      printf("your addition is =%f",  first + second);
      break;
    case '-':
      printf("your addition is =%f",  first - second);
      break;
    case '*':
      printf("your addition is =%f",  first * second);
      break;
    case '/':
      printf("your addition is =%f",  first / second);
      break;

    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
