#include <iostream> 
using namespace std; 
int main() { 
int a = 10; 
int* ptrA = &a; 
cout << "Value of a: " << a << endl; 
cout << "Address of a: " << &a << endl; 
cout << "Value of ptrA: " << ptrA << endl; 
cout << "Value at address ptrA: " << *ptrA << endl; 
return 0; 
} 
