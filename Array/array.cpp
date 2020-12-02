#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int a1[3][4];
	int b1[4][5];
	int p[3][5];
		
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a1[i][j] = rand() % 10 + 1;
			printf("%3d", a1[i][j]);
		}
		printf("\n");
	}
	printf("\n-------------------------------\n\n\n");

	for (int m = 0; m < 4; m++)
	{
		for (int n = 0; n < 5; n++)
		{
			b1[m][n] = rand() % 10 + 1;
			printf("%3d", b1[m][n]);
		}
		printf("\n");
	}
	printf("\n-------------------------------\n\n\n");

	for (int i = 0; i < 3; i++)
	{	
		for (int j = 0; j < 5; j++)
		{
			p[i][j] = 0;
			for (int c = 0; c < 4; c++)
			{	
				p[i][j]+= a1[i][c] * b1[c][j];
			}
			printf("%5d", p[i][j]);
		}
		printf("\n");
	}
}