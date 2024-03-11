//Take positive integer input and tell if it is divisible by 5 or not//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number :";
    cin>>num;

    if(num%5==0)
    {
        cout<<"the entered number is divisible by 5";
    }
    else
    {
        cout<<"the entered number is not divisible by 5";
    }
    return 0;
}
