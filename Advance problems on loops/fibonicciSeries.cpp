//Write a program to print the fibonicci series //
#include <iostream>
using namespace std;
int main() 
{
    int num;  
    int first=0,second=1;
    int current;
    cout << "Enter the number of terms you want in the Fibonicci series: ";
    cin >> num;
    cout << "Fibonacci Series: ";  
    for (int i = 1; i <= num; i++) 
    {
        cout << first << " ";  
        current=first+second;
        first = second;
        second=current;
    }
    
    return 0;
}