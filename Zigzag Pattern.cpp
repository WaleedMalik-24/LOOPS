#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the pattern (number of rows): ";
    cin >> n for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
;

