#include <iostream>
#include "Backtrace_class_to_trace_functions.hpp"

void fn1();
void fn2();
void fn3();
void fn1()
{
    TRACE;
  fn2();

}
  

void fn2()
{
    TRACE;
   fn3();
   

}
void fn3()
{
    TRACE;
    PRINT;
}
int main()
{
    TRACE;
    fn1();
    

}