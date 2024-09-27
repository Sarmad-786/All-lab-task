#include <iostream> 
using namespace std; 
int main() { 
int size; 
cout << "Enter the size of the array: "; 
cin >> size; 
int* arr = new int[size]; 
cout << "Enter elements of the array: "; 
for (int i = 0; i < size; i++) { 
cin >> arr[i]; 
} 
int sumOfOdd = 0; 
for (int i = 0; i < size; i++) { 
if (arr[i] % 2 != 0) { 
sumOfOdd += arr[i]; 
} 
} 
cout << "Sum of odd integers: " << sumOfOdd << endl; 
return 0; 
}
