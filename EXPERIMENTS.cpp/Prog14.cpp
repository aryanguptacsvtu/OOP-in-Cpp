#include <iostream>
using namespace std;

int main()
{
    // Dynamic memory allocation for two 2x2 matrices and result matrices
    int **matrix1 = new int *[2];
    int **matrix2 = new int *[2];
    int **matrixSum = new int *[2];
    int **matrixDiff = new int *[2];

    for (int i = 0; i < 2; i++)
    {
        matrix1[i] = new int[2];
        matrix2[i] = new int[2];
        matrixSum[i] = new int[2];
        matrixDiff[i] = new int[2];
    }

    // Input for the first matrix
    cout << "Enter elements of 2x2 matrix 1:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter elements of 2x2 matrix 2:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Performing addition and subtraction
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
            matrixDiff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the sum matrix
    cout << "Sum of the matrices:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixSum[i][j] << " ";
        }
        cout << endl;
    }

    // Displaying the difference matrix
    cout << "Difference of the matrices:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrixDiff[i][j] << " ";
        }
        cout << endl;
    }

    // Freeing dynamically allocated memory
    for (int i = 0; i < 2; i++)
    {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] matrixSum[i];
        delete[] matrixDiff[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] matrixSum;
    delete[] matrixDiff;

    return 0;
}
