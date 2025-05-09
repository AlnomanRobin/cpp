//Data Types
#include<iostream> //For cout
#include<string> //For string
using namespace std;

int main() {
    string name = "Al noman Robin";
    int num1 = 14; // 2 or 4 bytes
    float num2 = 12.25; // 	4 bytes
    double num3 = 75.69; // 8 bytes
    char letter = 'R'; // 1 byte
    bool A = true; // 1 byte

    cout << name << "\n";
    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num3 << "\n";
    cout << letter << "\n";
    cout << A; // Will print 1 for true
}
