#include <stdio.h>
#include <math.h>

int main () {

  /*
   *  This mini-project is a solver for quadratic equations using the general formula
   *
   * */

  // edit numbers depending on based on the main equatiom:
  // ax^2 + bx + c = 0 

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
