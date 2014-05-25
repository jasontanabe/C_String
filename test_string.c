#include <stdio.h>
#include "c_string.h"

int main() {
  String string;
  printf("Test str_Init\n");
  str_Init(&string);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);
  str_Free(&string);

  printf("Test str_InitSize (input: 120)\n");
  str_InitSize(&string, 120);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  str_SetIndex(&string, 121, 'a');
  str_SetIndex(&string, 119, 'b');
  printf("%c\n", str_GetIndex(&string, 1210));
  printf("%c\n", str_GetIndex(&string, 119));
  printf("string: %s\n\n", string.string);
  str_Free(&string);

  printf("Test str_InitCharPtr\n");
  str_InitCharPtr(&string, "Jason Tanabe");
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("Test str_InitString\n");
  String string2;
  str_InitString(&string2, &string);
  printf("length is %d\n", string2.length);
  printf("capacity is %d\n", string2.capacity);
  printf("string: %s\n\n", string2.string);
  str_Free(&string2);

  printf("test str_InitSubString\n");
  str_InitSubString(&string2, &string, 6, STR_NPOS);
  printf("length is %d\n", string2.length);
  printf("capacity is %d\n", string2.capacity);
  printf("string: %s\n\n", string2.string);

  str_Free(&string);
  printf("test str_InitBuffer\n");
  str_InitBuffer(&string, "jason tanabe", 5);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_EqualString\n");
  str_EqualString(&string, &string2);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_EqualCharPtr\n");
  str_EqualCharPtr(&string, "Hello There :)");
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_EqualChar\n");
  str_EqualChar(&string, 'c');
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  str_EqualCharPtr(&string, "hello my name is Jason ");

  printf("test str_AddString\n");
  str_AddString(&string, &string2);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_AddCharPtr\n");
  str_AddCharPtr(&string, " and I like to eat foo");
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_AddChar\n");
  str_AddChar(&string, 'd');
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  return 0;
}
