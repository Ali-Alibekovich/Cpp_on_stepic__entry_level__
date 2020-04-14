struct Cls {
    Cls(char c, double d, int i);
private:
    char c;
    double d;
    int i;
};

//Копия Cls с открытыми полями
class copy_cls {
public:
    copy_cls(){}
    copy_cls(char c, double d, int i):
            c(c), d(d), i(i){};
    char c;
    double d;
    int i;
};



// Эта функция должна предоставить доступ к полю c объекта cls.
// Обратите внимание, что возвращается ссылка на char, т. е.
// доступ предоставляется на чтение и запись.
char &get_c(Cls &cls)
{
    copy_cls *temp = reinterpret_cast<copy_cls*>(&cls);
    return temp->c;
}

// Эта функция должна предоставить доступ к полю d объекта cls.
// Обратите внимание, что возвращается ссылка на double, т. е.
// доступ предоставляется на чтение и запись.
double &get_d(Cls &cls) {
    copy_cls *temp = reinterpret_cast<copy_cls *>(&cls);
    return temp->d;
}

// Эта функция должна предоставить доступ к полю i объекта cls.
// Обратите внимание, что возвращается ссылка на int, т. е.
// доступ предоставляется на чтение и запись.
int &get_i(Cls &cls) {
    copy_cls *temp = reinterpret_cast<copy_cls*>(&cls);
    return temp->i;
}
