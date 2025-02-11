#include <stdio.h>

#define DEBUG_VAR(var) printf("File: %s, Line: %d, Variable: %s, Value: %d\n", __FILE__, __LINE__, #var, var)
  int main() {
  int x = 22;
  int y = 19;

DEBUG_VAR(x);  
DEBUG_VAR(y); 

return 0;
}
