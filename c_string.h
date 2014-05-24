#ifndef C_STRING_H_
#define C_STRING_H_

typedef struct String 
{
  char*             string; 
  int               length;
  int               max_size;
} String;

void                str_Init(String* string);
void                str_InitSize(String* string, int size);
void                str_InitString(String* string, String* other);
void                str_InitCharPtr(String* string, char* other);

#endif
