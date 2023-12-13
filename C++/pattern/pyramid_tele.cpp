#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height;

    printPyramid(height);

    return 0;
}
