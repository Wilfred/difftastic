#define DEBUG
#include "../src/stack.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  ScannerStack *stack = createStack();

  printStack(stack, "hello");

  assert(isEmptyStack(stack));

  pushStack(stack, 27);
  assert(!isEmptyStack(stack));
  assert(peekStack(stack) == 27);

  pushStack(stack, 42);
  assert(!isEmptyStack(stack));
  assert(peekStack(stack) == 42);

  assert(popStack(stack) == 42);
  assert(peekStack(stack) == 27);

  assert(popStack(stack) == 27);
  assert(peekStack(stack) == -1);
  assert(isEmptyStack(stack));

  char *buf = malloc(2048);

  for (int i = 0; i < 250; i++) {
    pushStack(stack, i);
  }

  assert(serialiseStack(stack, buf) == sizeof(int) * 253);

  ScannerStack *newStack = createStack();

  deserialiseStack(newStack, buf, sizeof(int) * 253);
  assert(newStack -> top == 250);
  assert(popStack(newStack) == 249);

  resetStack(newStack);

  assert(isEmptyStack(newStack));

  printStack(stack, "hello");
  printStack(newStack, "hello");
  return 0;
}
