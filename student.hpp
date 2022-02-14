#pragma once // prevents multiple definitions

#include <iostream> // print library

// Exercise 1: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

// ===============
// implementations

int add(int a, int b)
{
   // TODO: fix  -DONE
   return a + b;
}

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b)
{
   // TODO: fix -Let's see what happens when we accidentally subtract instead..
   return a - b;
}
