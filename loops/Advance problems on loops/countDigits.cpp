//Write a program to count digits of a given number//
#include<iostream>
using namespace std;
int main()
{
    int num , count = 0 ,rem;
    cout << " Enter any Number :";
    cin >> num;
    while(num!=0)
    {
        rem=num%10;
        count++;
        num = num/10;
    }
    cout<<count;
    
    return 0;
}