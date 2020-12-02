#include <iostream>
using namespace std;

class Matrix

{private:
    int* p;
    int row;
    int col;

public:
    Matrix(int* a, int r, int c) : p(a), row(r), col(c) {}
    void Multi(int* b, int c)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int num = 0;
                for (int k = 0; k < col; k++)
                {
                    num += (p[i * row + k] * b[k * c + j]);
                }
                printf("%5d", num);
            }
            printf("\n");
        }
    }
    static int srow;
    static int scol;
    static void Multi(int* a, int* b, int bcol)
    {
        for (int i = 0; i < srow; i++)
        {
            for (int j = 0; j < bcol; j++)
            {
                int num = 0;
                for (int k = 0; k < scol; k++)
                {
                    num += (a[i * srow + k] * b[k * bcol + j]);
                }
                printf("%5d", num);
            }
            printf("\n");
        }
    }
};

int Matrix::srow = 0;
int Matrix::scol = 0;

int main()
{
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int b[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

    Matrix::srow = 2;
    Matrix::scol = 3;
    Matrix::Multi((int*)a, (int*)b, 4);

    cout << endl;

    int c[3][4] = { {1, 2, 3, 4}, {4, 5, 6, 7}, {5, 6, 7, 8 } };
    int d[4][5] = { {1, 2, 3, 4, 5}, {5, 6, 7, 8, 9}, {9, 10, 11, 12, 13}, {14, 15,16,17,18} };


    Matrix::srow = 3;
    Matrix::scol = 4;
    Matrix::Multi((int*)c, (int*)d, 5);

    return 1;

}