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
  string->string = (char*)calloc(size, sizeof(char));
  string->length = 0;
  string->capacity = size;
}

void str_InitString(String* string, const String* other) 
{
  string->length = other->length;
  string->capacity = other->capacity;
  string->string = (char*)calloc(other->capacity, sizeof(char));
  strcpy(string->string, other->string);
}

void str_InitCharPtr(String* string, const char* other) 
{
  string->length = strlen(other);
  string->capacity = string->length + 1;
  string->string = (char*)calloc(string->capacity + 1, sizeof(char));
  strcpy(string->string, other);
}
