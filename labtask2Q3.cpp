#include <iostream>
using namespace std;
int main() {
 int size;
 cout << "Enter the size of the array: ";
 cin >> size;

 int* arr = new int[size];

 cout << "Enter elements for the array: ";
 for (int i = 0; i < size; i++) {
 cin >> arr[i];
 }
 int item;
 cout << "Enter the item to search: ";
 cin >> item;
 int found = 0;
 for (int i = 0; i < size; i++) {
 if (arr[i] == item) {
 cout << "Item found at index " << i << endl;
 found = 1;
 break;
 }
 }
 if (!found) {
 cout << "Item not found in the array" << endl;
 }
 return 0;
}
