#define MAXSIZE 255;
typedef struct{
    char ch[MAXSIZE];
    int length;
} SqString;

// TODO

void strAssign(SqString* s, char chars[], int length){}

void strCopy(SqString* s_dest, SqString* s_src){}

bool strIsEmpty(SqString* s){}

int strCompare(SqString* s1, SqString* s2){}

int strLength(SqString* s){}

void subString(SqString* sub, SqString* s, int pos, int len){}

void concat(SqString* dest, SqString* s1, SqString* s2){}

int index(SqString* s, SqString* sub){}

void clearString(SqString* s){}

void destoryString(SqString* s){}
