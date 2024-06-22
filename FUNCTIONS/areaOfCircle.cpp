/*
Q1 : Write a function that takes the radius of 
a circle as an argument and returns its area.
*/
#include<iostream>
using namespace std;
float area(int radius)
{
    float area = 3.14*radius*radius;
    cout << "The Area of the circle is :" << area;
    return area;
}
int main()
{
    int r;
    cin >> r;
    area(r);
    
    
}
