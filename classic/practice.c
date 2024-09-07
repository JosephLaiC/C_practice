#include <stdio.h>

int main(void) {

  int c;

  while ((c = getchar()) != EOF) {
    putchar(c); // 將讀取到的字符輸出
  }

  printf("%d\n", EOF);

  return 0;

}