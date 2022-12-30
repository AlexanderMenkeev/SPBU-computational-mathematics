#include <iostream>
#include <ctime>
#include <iomanip>

void printMatrix(double** M , int n, char _char)
{
	std::cout << "Matrix " << _char << ":" << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			std::cout << std::setw(5) << M[i][j];

		std::cout << std::endl;
	}
	std::cout << std::endl;
};

int main()
{
	srand(unsigned(time(0)));
	int n = 3;
	double** P = new double*[n];
	double** A = new double* [n];
	double** newA = new double* [n];
	for (int i = 0; i < n; i++)
	{
		P[i] = new double[n];
		A[i] = new double[n];
		newA[i] = new double[n];
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i][j] = rand() % 5;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			P[i][j] = 0;
			newA[i][j] = 0;
		}

	P[0][1] = 1;
	P[1][0] = 1;
	P[2][2] = 1;

	printMatrix(A, n, 'A');

	

	printMatrix(A, n, 'A');

	/*printMatrix(P, n, 'P');
	printMatrix(A, n, 'A');
	printMatrix(newA, n, 'C');

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				newA[i][j] += P[i][k] * A[k][j];

	printMatrix(newA, n, 'C');*/
}