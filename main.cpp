#include <iostream>
using namespace std;

int main() {
    int a[5][5];
    int number = 0;

    for (int i = 0; i <= 4; i += 2) {
        for (int j = 0; j <= 4; j++) {
            a[i][j] = number;
            number++;
        }
        number += 5;
    }
    number = 5;
    for (int i = 1; i <= 3 ; i += 2) {
        for (int j = 4; j >= 0 ; j--) {
            a[i][j] = number;
            number++;
        }
        number += 5;
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << " " << a[i][j];
        }
        cout << endl;
    }

}
