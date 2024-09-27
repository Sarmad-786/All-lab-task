#include <iostream>
using namespace std;
int main() {
 int a[10];
 cout << "Enter age of 10 users: ";
 for (int i = 0; i < 10; i++) {
 cin >> a[i];
 }
 int max_age = a[0];
 for (int i = 1; i < 10; i++) {
 if (a[i] > max_age) {
 max_age = a[i];
 }
 }
 cout << "Largest age of the student is: " << max_age << endl;
 return 0;
}
