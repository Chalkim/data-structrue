#include <stdlib.h>
#include <string.h>

int *next(char *string) {
  if(string == NULL) return NULL;

  int length = strlen(string);
  int *next = malloc(length * sizeof(int));

  int i = 0, j = -1;
  next[0] = -1;
  while(i < length - 1) {
    if(j == -1 || string[i] == string[j]) {
      i++; j++;
      if(string[i] != string[j]) next[i] = j;
      else next[i] = next[j];
    } else {
      j = next[j];
    }
  }

  return next;
}
