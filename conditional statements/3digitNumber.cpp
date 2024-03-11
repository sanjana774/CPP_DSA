//Take positive integer input and tell if it is a three digit number or not.//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any integer :";
    cin>>num;
    if(num>=100&&num<=999)
    {
        cout<<"the number is 3 digit number";
    }
    else
    {
        cout<<"the number is not a 3 digit number";
    }
    return 0;
}