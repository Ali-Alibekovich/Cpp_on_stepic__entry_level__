#include <cstring>

//ИЛИ

//Функция конкатенации (склейки) двух C-style строк
void strcat(char *to, const char *from) {
    for(;*to;++to);
    while((*to++=*from++));
}

