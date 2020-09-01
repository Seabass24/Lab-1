// Author: Sebastian Rodriguez spr5501@psu.edu
// Collaborater Xiang Liu xfl5249@psu.edu
// Collaborater: Kacey Lo kll5550 @psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int main(void) {
  double temperature, f;
  char *temp=readline("Enter temperature in celsius: ");
  temperature = atof(temp);
  f= temperature* 9/5 + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.",temperature,f);
  return 0;
}