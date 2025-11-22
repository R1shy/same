#ifdef _WIN32
#error "this relies on glibc/musl which is to say it won't work on non-unix systems"
#endif

#include <string.h>

int same(char* strOne, char* strTwo) {
 if (strcmp( strOne, strTwo) == 0) {                                                                                           
 return 0;                                                                                                                      
 }                                                                                                                                      
 return 1;
}
