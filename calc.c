#include <stdio.h>

int main(void)
{
  double num_one;
  double num_two;
  char Character[1] = " ";

  printf("Enter 'h' for help\n");
  while(1)
  {
    printf("Calc: ");
    scanf(" %lf %c %lf", &num_one, &Character[0], &num_two);

    switch (Character[0])
    {
      case'+': printf("= %d\n", (int)num_one + (int)num_two);
        break;
      case'-': printf("= %d\n", (int)num_one - (int)num_two);
        break;
      case'*': printf("= %d\n", (int)num_one * (int)num_two);
        break;
      case'%': printf("= %.2f\n", num_one / 100 * num_two);
        break;
      case'/': printf("= %d\n", (int)num_one / (int)num_two);
        default: continue;
    }

  }
  
  return 0;
}
