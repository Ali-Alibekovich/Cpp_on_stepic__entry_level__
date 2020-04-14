#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
    String(const char *str = "");
    String(size_t n, char c);
    ~String();


    /* Реализуйте этот метод. */
    void append(String &other) {
        size=size+strlen(other.str);
        char * array = new char [size+1];//создаю массив размер= две строки +1 под '\0';
        strcpy(array, str);
        strcpy(array + size-strlen(other.str), other.str);
        delete [] str;
        str=array;
    }
    size_t size;
    char *str;
};