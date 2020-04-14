int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int **array = new int * [cols];
    array[0]=new int [rows*cols];
    for (int i = 1; i !=cols ; ++i) {
        array[i]=array[i-1]+rows;
    }
    for (int i = 0; i !=cols ; ++i) {
        for (int j = 0; j !=rows ; ++j) {
            array[i][j]=m[j][i];
        }
    }
    return array;
}
