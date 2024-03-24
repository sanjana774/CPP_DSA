//write a program in which a number is divisible by 3 and even.//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number :";
    cin>>num;
    if((num%2==0) && (num%3==0))
    {
        cout<<"entered numbered is even and also divisible by 3";
    }
    else
    {
        cout<<"the entered numbered is odd";
    }
    return 0;
}