#include <stdio.h>
#include "c_string.h"

int main() {
  String string;
  printf("Test str_Init (input: none, var: string)\n");
  str_Init(&string);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);
  str_Free(&string);

  printf("Test str_InitSize (input: 120 chars, var: string)\n");
  str_InitSize(&string, 120);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("set index 121 with 'a'\n");
  str_SetIndex(&string, 121, 'a');
  printf("set index 119 with 'b'\n");
  str_SetIndex(&string, 119, 'b');
  printf("index 1210 is %c\n", str_GetIndex(&string, 1210));
  printf("index 119 is %c\n", str_GetIndex(&string, 119));
  printf("string: %s\n\n", string.string);
  str_Free(&string);

  printf("Test str_InitCharPtr (input: 'Jason Tanabe', var: string)\n");
  str_InitCharPtr(&string, "Jason Tanabe");
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("Test str_InitString (input: string, var: string2)\n");
  String string2;
  str_InitString(&string2, &string);
  printf("length is %d\n", string2.length);
  printf("capacity is %d\n", string2.capacity);
  printf("string: %s\n\n", string2.string);
  str_Free(&string2);

  printf("test str_InitSubString (input: string at pos 6, var: string2)\n");
  str_InitSubString(&string2, &string, 6, STR_NPOS);
  printf("length is %d\n", string2.length);
  printf("capacity is %d\n", string2.capacity);
  printf("string: %s\n\n", string2.string);

  str_Free(&string);
  printf("test str_InitBuffer (input: 'jason tanabe' pos 5, var: string)\n");
  str_InitBuffer(&string, "jason tanabe", 5);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_EqualString (input: string2, var: string)\n");
  str_EqualString(&string, &string2);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_EqualCharPtr (input: 'Hello There :)', var: string)\n");
  str_EqualCharPtr(&string, "Hello There :)");
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_EqualChar (input: 'c', var: string)\n");
  str_EqualChar(&string, 'c');
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("set string equal to 'hello my name is jason '\n");
  str_EqualCharPtr(&string, "hello my name is Jason ");

  printf("test str_AddString (input: string2, var: string1)\n");
  str_AddString(&string, &string2);
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_AddCharPtr (input: ' and I like to eat foo', var: string)"
         "\n");
  str_AddCharPtr(&string, " and I like to eat foo");
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  printf("test str_AddChar (input: 'd', var: string)\n");
  str_AddChar(&string, 'd');
  printf("length is %d\n", string.length);
  printf("capacity is %d\n", string.capacity);
  printf("string: %s\n\n", string.string);

  return 0;
}
