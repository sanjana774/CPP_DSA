/*Write a program to input sides of a triangle and check whether a triangle is equilateral, 
scalene or isosceles triangle*/
#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"enter the three sides of a triangle :";
    cin>>side1;
    cin>>side2;
    cin>>side3;
    if(side1==side2==side3)
    {
        cout<<"the triangle is an equilateral triangle";
    }
    else if(side1==side2||side2==side3||side1==side3)
    {
        cout<<"the triangle is an isoceles triangle";
    }
    else
    {
        cout<<"the triangle is a scalene triangle";
    }
    return 0;
}
