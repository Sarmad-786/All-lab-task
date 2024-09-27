#include <iostream>
using namespace std;


void menu() {
    cout << "Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;
    cout << "5. Power" << endl;
    cout << "Enter your choice: ";
}


int addition(int a, int b) {
    return a + b;
}


int subtraction(int a, int b) {
    return a - b;
}


double division(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (double)a / b;
}


int multiplication(int a, int b) {
    return a * b;
}


double power(int number, int pow) {
    double result = 1.0;
    for (int i = 0; i < pow; i++) {
        result *= number;
    }
    return result;
}

int main() {
    
    menu();

   
    int choice;
    cin >> choice;

    
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    switch (choice) {
        case 1:
            cout << "Result: " << addition(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << subtraction(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << division(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << multiplication(a, b) << endl;
            break;
        case 5:
            cout << "Result: " << power(a, b) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
