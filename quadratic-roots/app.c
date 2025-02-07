#include <stdio.h>
#include <math.h>

int main () {

  int 
    a = 1,
    b = 1,
    c = 0;

  int discriminant() {
    return (b * b) - (4 * a * c);
  }

  float root2 = ((-b) - pow(discriminant(), 0.5)) / 2 * a;
  float root1 = ((-b) + pow(discriminant(), 0.5)) / 2 * a;

  printf("X1 = %f\n", root1);
  printf("X2 = %f\n", root2);

  return 0;
}
