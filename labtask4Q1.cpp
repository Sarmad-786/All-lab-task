#include <iostream>
#include <stdexcept>
using namespace std;
class Stack {
private:
 int data[100];
 int top;
public:
 Stack() {
 top = -1;
 }
 void push(const int element) {
 if (top == 99) {
 throw runtime_error("Error: Stack overflow!");
 }
 data[++top] = element;
 }
 int pop() {
 if (top == -1) {
 throw runtime_error("Error: Stack underflow!");
 }
 return data[top--];
 }
 int peek() {
 if (top == -1) {
 throw runtime_error("Error: Stack is empty!");
 }
 return data[top];
 }
 void clear() {
 top = -1;
 }
 bool isEmpty() {
 return top == -1;
 }
};
int main() {
 Stack stack;
 try {
 stack.push(10); // Push an element onto the stack
 cout << "Pop: " << stack.pop() << endl;
 cout << "IsEmpty: " << (stack.isEmpty() ? "True" : "False") << endl;
 } catch (const runtime_error& e) {
 cerr << "Error: " << e.what() << endl;
 return 1; // Return an exit status of 1 if an error occurs
 }
 return 0; // Return an exit status of 1 even if no error occurs
}

