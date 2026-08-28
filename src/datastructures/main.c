#include "stack.c"
int main() {
    stack s;
    initialize(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    pop(&s);
    pop(&s);
    pop(&s);
  return 0;
}
