#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the pattern (number of rows): ";
    cin >> n;
     int matrix[n][n];
    int value = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right; i++) matrix[top][i] = value++;
        top++;
        for (int i = top; i <= bottom; i++) matrix[i][right] = value++;
        right--;
        for (int i = right; i >= left; i--) matrix[bottom][i] = value++;
        bottom--;
        for (int i = bottom; i >= top; i--) matrix[i][left] = value++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

