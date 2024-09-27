#include <iostream> 
using namespace std; 
int main() { 
int a, b; 
cout << "Enter value of a: "; 
cin >> a; 
cout << "Enter value of b: "; 
cin >> b; 
int* ptrA = &a; 
int* ptrB = &b; 
cout << "Before swapping: " << endl; 
cout << "a = " << a << ", b = " << b << endl; 
// Swap values using pointers 
int temp = *ptrA; 
*ptrA = *ptrB; 
*ptrB = temp; 
cout << "After swapping: " << endl; 
cout << "a = " << a << ", b = " << b << endl; 
return 0; 
} 
