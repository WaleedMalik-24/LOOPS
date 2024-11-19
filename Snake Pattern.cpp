#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the pattern (number of rows): ";
    cin >> n;
       int num = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= n; j++) {
                cout << num++ << " ";
            }
        } else {
            int temp = num + n - 1;
            for (int j = 1; j <= n; j++) {
                cout << temp-- << " ";
                num++;
            }
        }
        cout << endl;
    }
}

