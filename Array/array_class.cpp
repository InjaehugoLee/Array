#include<iostream>
using namespace std;

class Matrix
{
private:
    int* arr;
    int row;
    int col;
public:
    Matrix(int* a, int r, int c)
    {
        arr = a;
        row = r;
        col = c;
    }

    void Multi(int* b, int c)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int n = 0;
                for (int k = 0; k < col; k++)
                {
                    n += arr[col * i + k] * b[c * k + j];
                }
                printf("%4d", n);
            }
            cout << endl;
        }
    }
};
int main()
{
    int a[2][3] = { {1,2,3},{4,5,6} };
    int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    Matrix A((int*)a, 2, 3);
    //int* p = (int*)b;
    A.Multi((int*)b, 4);
    return 1;
}

//class로 만든 형식.
//class Matrix
//{
//private:
//    int* p;
//    int row;
//    int col;
//public:
//    Matrix(int* a, int r, int c):p(a), row(r), col(c) {}
//
//    void Multi(int* b, int c)
//    {
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < c; j++)
//            {
//                int n = 0;
//                for (int k = 0; k < col; k++)
//                {
//                   n+= p[col * i + k] * b[c * k + j];
//                }
//                printf("%4d", n);
//            }
//            cout << endl;
//        }
//    }
//};


