#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    // Step 1: Allocate memory for row pointers
    int** A = new int*[m];
    int** B = new int*[m];
    int** C = new int*[m];

    // Step 2: Allocate memory for each row
    for (int i = 0; i < m; i++) {
        A[i] = new int[n];
        B[i] = new int[n];
        C[i] = new int[n];
    }

    // Step 3: Accept elements of matrix A
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Step 4: Accept elements of matrix B
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Step 5: Perform matrix addition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Step 6: Display resulting matrix
    cout << "Resultant Matrix (A + B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Step 7: Properly deallocate memory
    for (int i = 0; i < m; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
