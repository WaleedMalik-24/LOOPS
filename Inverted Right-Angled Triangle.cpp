#include <iostream>
using namespace std;
 int main() {
    int n;
    cout << "Enter the size of the pattern (number of rows): ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
}
