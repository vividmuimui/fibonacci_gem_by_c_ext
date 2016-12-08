#include "fibonacci.h"

VALUE rb_mFibonacci;

void
Init_fibonacci(void)
{
  rb_mFibonacci = rb_define_module("Fibonacci");
}
