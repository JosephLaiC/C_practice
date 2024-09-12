#include <stdio.h>

int main(void) {
  
  int n = 20;
  int numbers[] = {20, 500, 10, 5, 100, 1, 50};

  int length = sizeof(numbers) / sizeof(numbers[0]);
  // printf("%i\n", length);

  for (int i = 0; i < length; i++) {

    if (numbers[i] == n) {
      printf("Found\n");
      return 0;
    }

  }


  // int n = 20;

  // for (int i = 0; i < 7; i++)
  // {
  //   printf("%i\n", i);
  // }

}
