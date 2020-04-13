#include <iostream>
#include <cstdlib>

using  namespace std;

char *getline()
{
    char *array = new char[1];
    for(int i=0; cin.get(array[i]) && array[i] != '\n';i++)
    {
        array = (char *)realloc(array, sizeof(char)*(i+2));
        array[i+1] = '\0';
    }
    return array;
}


int main(){
    cout<<getline();
}
