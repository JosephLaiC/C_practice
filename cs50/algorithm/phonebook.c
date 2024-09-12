#include <stdio.h>
#include <string.h>

typedef struct {
  char* name;
  char* number;
} person;

void initialize_people(person people[]) {
  people[0].name = "joseph";
  people[0].number = "0908428103";

  people[1].name = "yvvone";
  people[1].number = "0975094559";
}

int main(void) {
  person people[2];
  initialize_people(people);

  int length = sizeof(people) / sizeof(people[0]);

  char* name = "joseph";

  for (int i = 0; i < length; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Number: %s\n", people[i].number);
    }
  }

  return 0;
}