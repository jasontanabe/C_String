#ifndef C_STRING_H_
#define C_STRING_H_

#define STR_NPOS -1
#define TRUE 1
#define FALSE 0

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
void                str_InitSubString(String* string, const String* other, 
                                      int pos, int length);
void                str_InitBuffer(String* string, const char* other, int n);

void                str_EqualString(String* string, const String* other);
void                str_EqualCharPtr(String* string, const char* other);
void                str_EqualChar(String* string, char c);

void                str_AddString(String* string, const String* other);
void                str_AddCharPtr(String* string, const char* other);
void                str_AddChar(String* string, char c);

int                 str_FindString(const String* string, const String* other, 
                                   int pos);
int                 str_FindCharPtr(const String* string, const char* other, 
                                    int pos);
int                 str_FindChar(const String* string, char c, int pos);

void                str_SetIndex(String* string, int index, char c);
char                str_GetIndex(const String* string, int index);

int                 str_IsValidPos(const String* string, int pos);

void                str_Free(String* string);

static void         str_InitLengthCapacity(String* string, int length, 
                                           int size);

#endif
