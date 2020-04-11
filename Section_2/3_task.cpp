#include <iostream>

using namespace std;

int foo() {
    int a;
    cin >> a;
    if (a == 0)
        return a;
    foo();
    cout << a << " ";
    return 0;
}


int main (){
    foo();
}
