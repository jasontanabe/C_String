#ifndef C_STRING_H_
#define C_STRING_H_

typedef struct String 
{
  char*             string; 
  int               length;
  int               capacity;
} String;

void                str_Init(String* string);
void                str_InitSize(String* string, int size);
void                str_InitString(String* string, const String* other);
void                str_InitCharPtr(String* string, const char* other);

#endif
