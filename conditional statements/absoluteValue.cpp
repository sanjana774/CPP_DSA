//Given an integer Print the absolute value of that integer//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number";
    cin>>num;
    if(num<0)
    {
        num=num*(-1);
        cout<<"absolute value of the integer :"<<num;
    }
    else
    {
        num=num;
        cout<<"absolute value of the integer :"<<num;
    }
    return 0;
}