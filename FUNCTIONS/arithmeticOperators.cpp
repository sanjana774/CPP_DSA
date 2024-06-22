#include<iostream>
using namespace std;
int addition(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int subtraction(int num1, int num2)
{
    int sub = num1 - num2;
    return sub;
}
int multiplication(int num1, int num2)
{
    int multiply = num1 * num2;
    return multiply;
}
int division(int num1, int num2)
{
    int division = num1 / num2;
    return division;
}
int main()
{
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<"sum of two numbers :"<<addition(a,b)<<"\n";
    cout<<"subtraction of two numbers :"<<subtraction(a,b)<<"\n";
    cout<<"multiplication of two numbers :"<<multiplication(a,b)<<"\n";
    cout<<"division of two numbers :"<<division(a,b)<<"\n";    
    return 0;
}