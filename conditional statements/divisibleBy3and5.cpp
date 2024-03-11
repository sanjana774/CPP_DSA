//Take positive integer input and tell if it is divisible by 5 and 3.//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number :";
    cin>>num;
    if(num%3==0&&num%5==0)
    {
        cout<<"the number is divisible by 5 and 3";
    }
    else 
    {
        cout<<"the number is not divisible by 5 and 3";
    }
    return 0;
}