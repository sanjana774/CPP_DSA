//WAP to print the sum of all the even digits of a given number.//
//Sample Input : 4556//
#include<iostream>
using namespace std;
int main()
{
    int sum = 0 , num , digits ;
    cout<<"Enter any number :";
    cin >> num;
    while(num>0)
    {
        digits = num % 10;
        if(digits % 2 == 0)
        {
            sum+=digits;
        }
    num /=10;
    }
    cout<<"Sum of digits :"<<sum;

    return 0;
}