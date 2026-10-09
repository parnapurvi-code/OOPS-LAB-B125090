#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    Matrix(int x11 = 0, int x12 = 0,
           int x21 = 0, int x22 = 0) {
        a[0][0] = x11;
        a[0][1] = x12;
        a[1][0] = x21;
        a[1][1] = x22;
    }

    Matrix operator+(const Matrix& m) const {
        Matrix result;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return result;
    }

    void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);

    cout << "First matrix:\n";
    m1.display();

    cout << "Second matrix:\n";
    m2.display();

    Matrix sum = m1 + m2;

    cout << "Resultant matrix:\n";
    sum.display();

    cout << "First matrix after addition:\n";
    m1.display();

    return 0;
}