#include "fibonacci.h"

VALUE rb_mFibonacci;

int fib(int n)
{
    if (n < 2) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

VALUE fib_entry(VALUE self, VALUE n_val)
{
    int n = NUM2INT(n_val);
    int result = fib(n);
    return INT2NUM(result);
}

void
Init_fibonacci(void)
{
  rb_mFibonacci = rb_define_module("Fibonacci");
  rb_define_module_function(rb_mFibonacci, "fib", fib_entry, 1);
}
