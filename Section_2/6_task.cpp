
//Решение гАвно, но рабочее гАвно

int strlen(const char *a)
{
    int size = 0;
    while(*(a+size) != '\0')
        ++size;
    return size;
}


int strstr(const char *text, const char *pattern)
{
    int count = 0;
    bool thereIs = false;
    if (*pattern == '\0') return 0;
    if (*text == '\0') return -1;
    if(strlen(text)<strlen(pattern)) return -1;

    if (pattern == "") return 0;

    for (; *text != '\0'; ++text, count++)
    {
        if (*text == *pattern) {
            for (int i = 0; pattern[i] != '\0'; i++) {
                if (text[i] == pattern[i]) thereIs = true;
                else thereIs = false;
            }
            if (!thereIs) continue;
            return count;
        }
    }
    return -1;
}