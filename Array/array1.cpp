//2차원 배열을 1차원으로 출력하는 방법.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {

    srand(time(NULL));

    int a[3][4] = { {0,} };
    int* pa = (int*)a;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++) {
            pa[4 * i + j] = rand() % 10 + 1;
            printf("%3d", pa[4 * i + j]);

        }
        cout << endl;
    }
    cout << endl << endl;

    int b[4][5] = { { 0, } };
    int* pb = (int*)b;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++) {
            pb[5 * i + j] = rand() % 10 + 1;
            printf("%3d", pb[5 * i + j]);

        }
        cout << endl;
    }

    cout << endl << endl;


    int c[3][5] = { { 0, } };
    int* pc = (int*)c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                int t1 = pa[4 * i + k];
                int t2 = pb[5 * k + j];
                pc[5 * i + j] += pa[4 * i + k] * pb[5 * k + j];
            }
            printf("%4d", pc[5 * i + j]);
        }
        cout << endl;
    }
    return 0;
}