#include <iostream>
using namespace std;

class Score {
    int score;

public:
    Score(int s = 0) {
        score = s;
    }

    Score operator++() {
        ++score;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() const {
        cout << score;
    }
};

int main() {
    Score s1(10), s2(10);

    Score prefixResult = ++s1;
    Score postfixResult = s2++;

    cout << "Prefix result: ";
    prefixResult.display();

    cout << "\nScore after prefix: ";
    s1.display();

    cout << "\nPostfix result: ";
    postfixResult.display();

    cout << "\nScore after postfix: ";
    s2.display();

    cout << endl;
    return 0;
}