#include <iostream>
using namespace std;
int main() {
 int size;
 cout << "Enter the size of the arrays: ";
 cin >> size;
 int* arr1 = new int[size];
 int* arr2 = new int[size];
 int* arr3 = new int[size];
 int* sum_arr = new int[size];

 cout << "Enter elements for the first array: ";
 for (int i = 0; i < size; i++) {
 cin >> arr1[i];
 }

 cout << "Enter elements for the second array: ";
 for (int i = 0; i < size; i++) {
 cin >> arr2[i];
 }
 cout << "Enter elements for the third array: ";
 for (int i = 0; i < size; i++) {
 cin >> arr3[i];
 }
 for (int i = 0; i < size; i++) {
 sum_arr[i] = arr1[i] + arr2[i] + arr3[i];
 }

 cout << "Sum array: ";
 for (int i = 0; i < size; i++) {
 cout << sum_arr[i] << " ";
 }
 cout << endl;
 return 0;
}
