#include <stdio.h>
#include "c_string.h"

int main() {
  String test; 
  str_InitCharPtr(&test, "Jason Tanabe");
	printf("length is %d\n", test.length);
	printf("capacity is %d\n", test.capacity);
	printf("string: %s\n", test.string);
  return 0;
}
