//Take 3 positive integers input and print the greatest of 
#include<iostream>
using namespace std;
int main()
{ 
    int num1,num2,num3;
    cout<<"enter 3 numbers :";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if(num1>num2&&num1>num3)
    {
        cout<<"first number is greatest among all the three";
    }
    else if(num2>num1&&num2>num3)
    {
        cout<<"second number is greatest among all the three";
    }
    else
    {
        cout<<"third number is greatest of all";
    }
    return 0;
}