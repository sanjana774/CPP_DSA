#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year % 400 == 0) 
    {
        cout <<"the year is leap";
    }
    else if(year % 4 == 0 && year % 100 != 0)
    {
        cout <<"the year is leap";
    }
    else
    cout<<"the year is not leap";
    return 0;
}