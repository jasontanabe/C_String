#include <stdio.h>
#include <stdlib.h>
#include "c_string.h"

void str_Init(String* string) 
{
  string->string = NULL;
  string->length = 0;
  string->max_size = 0;
}

void str_InitSize(String* string, int size) 
{
  string->string = (char*)calloc(size, sizeof(char));
  string->length = 0;
  string->max_size = size;
}

void str_InitString(String* string, String* other) 
{

}

void str_InitCharPtr(String* string, char* other) 
{

}
