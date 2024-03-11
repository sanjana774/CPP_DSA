/*Given the radius of the circle predict whether numerically area of this circle is larger than the 
circumference or not*/
#include<iostream>
using namespace std;
int main()
{
    int radius;
    float pi=3.14,circumference,area;
    cout<<"enter the radius of a cirle :";
    cin>>radius;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    cout<<"area of a circle is :"<<area<<endl;
    cout<<"circumference of a circle :"<<circumference<<endl;
    if(area<circumference)
    {
        cout<<"area is smaller than the circumference of a circle";
    }
    else
    {
        cout<<"circumference is smaller than the area of a circle";
    }
    return 0;
}