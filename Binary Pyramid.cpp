#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the pattern (number of rows): ";
    cin >> n;
        for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ((j % 2 == 0) ? "0" : "1");
        }
        cout << endl;
    }
}
