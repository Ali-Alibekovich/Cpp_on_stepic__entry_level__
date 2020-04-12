#include <iostream>

using namespace std;
//Функция сдвига
void rotate(int a[], unsigned size, int shift)
{
    for(int i = 0; i<shift ; i++){
        int temp=a[0];
        for (int i=0; i <= size-1; i++)
        {
            a[i]=a[i+1];
        }
        a[size-1]=temp;
    }
    for(int i = 0; i<size; i++){
        cout<<a[i];
    }
}


//Тест
int main(){
    int c;
    cin>>c;
    int a[]{1,2,3,4,5,6,7,8,9,10};
    rotate(a,10,c);
}


