#include <iostream>
using namespace std;

int main() {
    float a, b, sum, subtract, divide, multiply;
    int x;

    cout << "What do you want to do? (Please enter the process number!)" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;

    cin >> x;

    cout << "Enter your first number: " << endl;
    cin >> a;

    cout << "Enter your second number: " << endl;
    cin >> b;

    if (x == 1) {
        sum = a + b;
        cout << "Sum: " << sum << endl;
    } 
    else if (x == 2) {
        subtract = a - b;
        cout << "Difference: " << subtract << endl;
    } 
    else if (x == 3) {
        if(b != 0) {
            divide = a / b;
            cout << "Quotient: " << divide << endl;
        } 
        else {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else if (x == 4) {
        multiply = a * b;
        cout << "Product: " << multiply << endl;
    } 
    else {
        cout << "Enter the correct process number!" << endl;
    }

    return 0;
}


