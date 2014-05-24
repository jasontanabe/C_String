typedef struct String 
{
  char*             string; 
  int               length;
  int               max_size;
} String;

void                str_Init(String* string, int size);
void                str_InitString(String* string, String* other);
void                str_InitCharPtr(String* string, char* other);
