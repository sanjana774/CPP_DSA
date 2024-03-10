// implementation of arithmetic operator//

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<< "First  number is :";
    cin>>num1;
    
    cout<< "Second  number is :";
    cin>>num2;
    // Addition of 2 numbers//
    cout<<"Result :"<<num1+num2<<endl;

    // Subtraction of 2 numbers//
    cout<<"Result :"<<num1-num2<<endl;

    // Multiplication of 2 numbers//
    cout<<"Result :"<<num1*num2<<endl;

    // Division of 2 numbers//
    cout<<"Result :"<<num1/num2<<endl;

    // Modulus Operator//
    cout<<"Result :"<<num1%num2<<endl;

    return 0;
}