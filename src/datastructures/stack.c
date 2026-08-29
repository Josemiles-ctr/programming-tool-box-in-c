#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 1000
typedef struct{
    int top;
    int arr[MAX_SIZE];
} stack;

void initialize(stack *s) {
    s->top = -1;
}
bool isFull(stack *s) {
    return s->top == MAX_SIZE - 1;
}
bool isEmpty(stack *s) {
    return s->top == -1;
}
void push(stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->arr[++s->top] = value;
}
int pop(stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1; // Return an invalid value to indicate underflow
  }
    int popped= s->arr[s->top];
    s->top--;
    printf("Popped element: %d\n", popped);
    return popped;
}
void peek(stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", s->arr[s->top]);
}
