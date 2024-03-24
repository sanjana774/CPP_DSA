//Write a program to print the fibonicci series //
#include <iostream>
using namespace std;

int main() 
{
    int num;  
    int a = 0, b = 1; 
    cout << "Enter the number of terms you want in the Fibonacci series: ";
    cin >> num;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; ++i) {
        cout << a << " ";  
        int next = a + b;
        a = b;
        b=next;
    }
    cout << endl;
    return 0;
}