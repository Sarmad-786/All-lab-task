#include <iostream> 
using namespace std; 
int main() { 
double rainfall[12]; 
cout << "Enter rainfall for each of 12 months: "; 
for (int i = 0; i < 12; i++) { 
cin >> rainfall[i]; 
} 
double totalRainfall = 0; 
for (int i = 0; i < 12; i++) { 
totalRainfall += rainfall[i]; 
} 
double averageRainfall = totalRainfall / 12; 
int highestMonth = 0, lowestMonth = 0; 
for (int i = 1; i < 12; i++) { 
if (rainfall[i] > rainfall[highestMonth]) { 
highestMonth = i; 
} 
if (rainfall[i] < rainfall[lowestMonth]) { 
lowestMonth = i; 
} 
} 
cout << "Total rainfall: " << totalRainfall << endl; 
cout << "Average monthly rainfall: " << averageRainfall << endl; 
cout << "Highest rainfall in month: " << highestMonth + 1 << endl; 
cout << "Lowest rainfall in month: " << lowestMonth + 1 << endl; 
return 0; 
}
