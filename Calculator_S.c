#include <stdio.h>

int main() {

  int op;
  double first, second;
  printf("Enter your choice 1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Percentage");
  scanf("%d", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case 1:
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case 2:
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
case 3:
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
 case 4:
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
case 5:
      printf("%.1lf is %.1lf% of %.1lf", first, (first / second)*100,second);
      break;
    default:

      printf("Error! Option chosen is not correct");
  }

  return 0;
}