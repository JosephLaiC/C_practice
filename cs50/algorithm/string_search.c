#include <stdio.h>

int strcmp(str_1, str_2) {

  if (str_1 == str_2) {
    return 0;
  } else {
    return 1;
  }

}


int main(void) {
    
  char* strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

  char* s = "boot";

  int length = sizeof(strings) / sizeof(strings[0]);

  for (int i = 0; i < length; i++) {
    if (strcmp(strings[i], s) == 0) {
      printf("hi\n");
    }
  } 


}


