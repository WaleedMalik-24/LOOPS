#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the pattern (number of rows): ";
    cin >> n;
      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        char ch = 'A';
        for (int j = 1; j <= i; j++) cout << ch++;
        for (int j = i - 1; j >= 1; j--) cout << --ch;
        cout << endl;
    }
}
