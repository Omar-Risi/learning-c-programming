#include <stdio.h>

int main()
{

  int arr[3] = {10, 50, 100}, temp;

  for (int i = 0; i < 2; i++)
  {
    for(int k = 0; k < 2-i;k++) {
      if(arr[k] < arr[k+1])
      {
        temp = arr[k];
        arr[k] = arr[k+1];
        arr[k+1] = temp;
      }
    }
  }

  printf("1. %d\n2. %d\n3. %d\n", arr[0],arr[1],arr[2]);
  return 0;
}
