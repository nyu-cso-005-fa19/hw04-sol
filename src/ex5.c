#include <stdlib.h>
#include "../src/ex5.h"

int
ex5(node *head) {
  node *n = head;
  if (!n) {
    return 1;
  }
  while (n->next) {
    if (n->value > n->next->value) {
      return 0;
    }
    n = n->next;
  }
  return 1;}
