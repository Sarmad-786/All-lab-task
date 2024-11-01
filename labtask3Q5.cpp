#include <iostream>
using namespace std;
int main() {
 int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 int total = 0;
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 total += arr[i][j];
 }
 }
 double average = (double)total / (3 * 3);
 cout << "Total: " << total << endl;
 cout << "Average: " << average << endl;
 int rowTotal[3] = {0, 0, 0};
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 rowTotal[i] += arr[i][j];
 }
 }
 int colTotal[3] = {0, 0, 0};
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 colTotal[j] += arr[i][j];
 }
 }
 int highestInRow[3] = {arr[0][0], arr[1][0], arr[2][0]};
 for (int i = 0; i < 3; i++) {
 for (int j = 1; j < 3; j++) {
 if (arr[i][j] > highestInRow[i]) {
 highestInRow[i] = arr[i][j];
 }
 }
 }
 int highestInCol[3] = {arr[0][0], arr[0][1], arr[0][2]};
 for (int i = 1; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 if (arr[i][j] > highestInCol[j]) {
 highestInCol[j] = arr[i][j];
 }
 }
 }
 cout << "Row totals: ";
 for (int i = 0; i < 3; i++) {
 cout << rowTotal[i] << " ";
 }
 cout << endl;
 cout << "Column totals: ";
 for (int i = 0; i < 3; i++) {
 cout << colTotal[i] << " ";
 }
 cout << endl;
 cout << "Highest in each row: ";
 for (int i = 0; i < 3; i++) {
 cout << highestInRow[i] << " ";
 }
 cout << endl;
 cout << "Highest in each column: ";
 for (int i = 0; i < 3; i++) {
 cout << highestInCol[i] << " ";
 }
 cout << endl;
 return 0;
}
