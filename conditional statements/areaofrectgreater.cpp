/*Given the length and breadth of a rectangle, write a program to find whether numerically 
the area of the rectangle is greater than its perimeter*/
#include<iostream>
using namespace std;
int main()
{
    int length,breadth,area,perimeter;
    cout<<"enter the length of the rectangle :";
    cin>>length;
    cout<<"enter the breadth of the rectangle :";
    cin>>breadth;
    area=length*breadth;
    perimeter=2*(length+breadth);
    cout<<"perimeter :"<<perimeter<<endl;
    cout<<"area :"<<area<<endl;
    if(area<perimeter)
    {
        cout<<"perimeter is greater than the area of the rectangle";
    }
    else
    {
        cout<<"area is greater than the perimeter of the rectangle";
    }
    return 0;
}