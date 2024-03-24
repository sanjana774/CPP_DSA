//write a program to use switch case in which day name is printed based on the number?//
#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;
    switch (day)
    {
    case 1:
    cout<<"monday";
        break;
    case 2:
    cout<<"tuesday";
        break;
    case 3:
    cout<<"wednesday";
        break;
    case 4:
    cout<<"thursday";
        break;
    case 5:
    cout<<"friday";
        break;
    case 6:
    cout<<"saturday";
        break;
    case 7:
    cout<<"sunday";
        break;
    default:
    cout<<"incorrect";
        break;
    }
    return 0;
}