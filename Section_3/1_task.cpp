#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
    String(const char *str = ""){
        size=strlen(str);
        char *copy_array=new char [size+1];
        strcpy(copy_array,str);
        copy_array[size+1]='\0';
        this->str=copy_array;
    }
    size_t size;
    char *str;
};
