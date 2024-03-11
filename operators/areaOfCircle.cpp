//Q2. Calculating Area of a Circle//
#include<iostream>
using namespace std;
int main()
{
    int radius;
    float pi=3.14,area;

    cout<<"radius of the circle is :";
    cin>>radius;

    area=radius*radius*pi;

    cout<<"area of the circle is :"<<area;
    return 0;
}