#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

using namespace std;

struct String {

    /* Реализуйте этот конструктор */
    String(size_t n, char c){
        char * a = new char [n+1];
        for(int i = 0; i<n;i++){
            a[i]=c;
            a[i+1]='\0';
        }
        str=a;
        size=n;
    }

    /* и деструктор */
    ~String(){
        delete [] str;
    }

    size_t size;
    char *str;
};
