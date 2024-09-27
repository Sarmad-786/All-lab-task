#include <iostream> 
using namespace std; 
class Stack { 
private: 
char data[100]; 
int top; 
public: 
Stack() { 
top = -1; 
} 
void push(const char element) { 
if (top == 99) { 
throw runtime_error("Error: Stack overflow!"); 
} 
data[++top] = element; 
} 
char pop() { 
if (top == -1) { 
throw runtime_error("Error: Stack underflow!"); 
} 
return data[top--]; 
} 
}; 
void reverse_string(char* str) { 
Stack stack; 
int len = strlen(str); 
for (int i = 0; i < len; i++) { 
} 
stack.push(str[i]); 
for (int i = 0; i < len; i++) { 
str[i] = stack.pop(); 
} 
} 
int main() { 
char str[100]; 
cout << "Enter a string: "; 
cin.getline(str, 100); 
cout << "Original string: " << str << endl; 
reverse_string(str); 
cout << "Reversed string: " << str << endl; 
return 0; 
}     
