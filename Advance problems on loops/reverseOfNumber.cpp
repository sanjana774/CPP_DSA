//Write a program to print reverse of a given number .//
#include<iostream>
using namespace std;
int main()
{
    int number,rem,reverse=0;
    cout << "Enter any number :";
    cin >> number;
    while (number !=0)
    {
        rem = number % 10;
        reverse = reverse*10+rem;
        number = number / 10;
        
    }
    cout << reverse <<  "of a given number ";
    return 0;
}