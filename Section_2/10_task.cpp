#include <iostream>
#include <cstdlib>

using  namespace std;

//НИЖЕ ВСЕ ДЛЯ ТЕСТА МАТРИЦЫ

void swap_min(int *m[], unsigned rows, unsigned cols){
    int min=999;
    int row=0;
    for (int i = 0; i !=rows ; ++i) {
        for (int j = 0; j !=cols ;++j) {
            if(m[i][j]<min){
                min=m[i][j];
                row=i;
            }
        }
    }
    int *temp = m[0];
    m[0]=m[row];
    m[row]=temp;
}








//void print_array2d(int **m, size_t a, size_t b)
//{
//    for (size_t i = 0; i != a; ++i)
//    {
//        for (size_t j = 0; j != b; ++j)
//            cout <<" "<< m[i][j];
//        cout << '\n';
//    }
//}
//
//
//int ** create_array2d_effective(size_t a, size_t b)
//{
//    int ** m = new int *[a];
//    m[0] = new int[a * b];
//    for (size_t i = 1; i != a; ++i)
//        m[i] = m[i - 1] + b;
//    return m;
//}
//
//void read_array2d(int **m, size_t a, size_t b)
//{
//    for (size_t i = 0; i != a; ++i)
//        for (size_t j = 0; j != b; ++j)
//            std::cin >> m[i][j];
//}
//
//int main(){
////    int a,b;
////    cin >> a >> b;
////    int **m = create_array2d_effective(a, b);
////    read_array2d(m, a, b);
////    swap_min(m, a, b);
////    print_array2d(m,a,b);
////}