#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c_string.h"

void str_Init(String* string) 
{
  string->string = NULL;
  string->length = 0;
  string->capacity = 0;
}

void str_InitSize(String* string, int size) 
{
  str_InitLengthCapacity(string, 0, size + 1);
}

void str_InitString(String* string, const String* other) 
{
  str_InitLengthCapacity(string, other->length, other->capacity);
  strcpy(string->string, other->string);
}

void str_InitCharPtr(String* string, const char* other) 
{
  int length = strlen(other);
  str_InitLengthCapacity(string, length, length + 1);
  strcpy(string->string, other);
}

void str_InitSubString(String* string, const String* other, int pos, int length)
{
  if (pos + (length - 1) > other->length - 1) {
    printf("str_InitSubString: pos %d or length %d out of bounds\n", pos, 
           length);
    return;
  }
  if (length == STR_NPOS) {
    length = other->length - pos;
  }
  str_InitLengthCapacity(string, length, length + 1);
  int i = 0;
  for (i = 0; i < string->length; ++i) {
    string->string[i] = other->string[pos + i];
  }
  string->string[i] = '\0';
}

void str_InitBuffer(String* string, const char* other, int n) 
{
  str_InitLengthCapacity(string, n, n + 1);
  int i = 0;
  for (i = 0; i < n; ++i) {
    string->string[i] = other[i];
  }
  string->string[i] = '\0';
}

void str_SetIndex(String* string, int index, char c)
{
  // if index is greater than max # of indices (excluding '\0' char)
  if (index > string->capacity - 2) {
    printf("str_SetChar: Index %d out of bounds\n", index);
    return;
  }
  string->string[index] = c;
}

char str_GetIndex(String* string, int index) 
{
  if (index > string->capacity - 2) {
    printf("str_GetIndex: Index %d out of bounds\n", index);
    return '\0';
  }
  return string->string[index];
}

void str_Free(String* string) 
{
  string->length = 0;
  string->capacity = 0;
  free(string->string);
}

void str_InitLengthCapacity(String* string, int length, int capacity) 
{	
  string->string = (char*)calloc(capacity, sizeof(char));
  string->length = length;
  string->capacity = capacity;
}

