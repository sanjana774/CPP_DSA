//Write a program to print factorial of a given number//
#include<iostream>
using namespace std;
int main()
{
    int i,num;
    int fact=1;
    cout << "Enter any number :";
    cin >> num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout << fact;
    return 0;
}