#include <stdio.h>
#include <assert.h>

int add(int,int);

int main() {
  int sum;

  printf("add(1,2) should equal 3.\n");
  sum = add(1,2);
  assert(sum == 3);
  
  printf("add(-5,-5) should equal 0.\n");
  sum = add(-5, 5);
  assert(sum == 0);
  
  printf("add(-2, -4) should equal -6\n");
  sum = add(-2, -4);
  assert(sum == -6);
  
  printf("tests succeeded.");
  
  return 0;
}
