#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = (num2 != 0) ? num1 / num2 : 0; 
    int remainder = (num2 != 0) ? static_cast<int>(num1) % static_cast<int>(num2) : 0; 
	
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << (num2 != 0 ? quotient : 0) << " (undefined if dividing by zero)" << endl;
    cout << "Remainder: " << (num2 != 0 ? remainder : 0) << " (undefined if dividing by zero)" << endl;

    return 0;
}
