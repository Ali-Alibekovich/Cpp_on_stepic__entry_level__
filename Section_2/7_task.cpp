char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *array = new char[new_size];
    for(int i = 0; i<size && i<new_size;i++){
        array[i]=str[i];
    }
    delete [] str;
    str=0;
    return array;
}