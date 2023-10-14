#include <iostream>

using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b is " << (a == b) << endl; // Equal to
    cout << "a != b is " << (a != b) << endl; // Not equal to
    cout << "a > b is " << (a > b) << endl;   // Greater than
    cout << "a < b is " << (a < b) << endl;   // Less than
    cout << "a >= b is " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b is " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y is " << (x && y) << endl; // Logical AND
    cout << "x || y is " << (x || y) << endl; // Logical OR
    cout << "!x is " << !x << endl;           // Logical NOT

    // Assignment Operators
    int c = 7;
    cout << "\nAssignment Operators:" << endl;
    cout << "c = " << c << endl;
    c += 3; // c = c + 3
    cout << "c += 3 => c = " << c << endl;
    c -= 2; // c = c - 2
    cout << "c -= 2 => c = " << c << endl;
    c *= 5; // c = c * 5
    cout << "c *= 5 => c = " << c << endl;
    c /= 4; // c = c / 4
    cout << "c /= 4 => c = " << c << endl;
    c %= 3; // c = c % 3
    cout << "c %= 3 => c = " << c << endl;

    // Increment and Decrement Operators
    int d = 5;
    cout << "\nIncrement and Decrement Operators:" << endl;
    cout << "d = " << d << endl;
    d++; // Post-increment
    cout << "d++ => d = " << d << endl;
    ++d; // Pre-increment
    cout << "++d => d = " << d << endl;
    d--; // Post-decrement
    cout << "d-- => d = " << d << endl;
    --d; // Pre-decrement
    cout << "--d => d = " << d << endl;

    return 0;
}










