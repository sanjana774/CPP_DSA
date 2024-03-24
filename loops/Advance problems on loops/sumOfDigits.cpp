//write a program to print the sum of digits of a given number.//
#include<iostream>
using namespace std;
int main()
{
    int num , sum =0 , rem;
    cout << "enter any number :";
    cin >> num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num/=10;
    }
    cout << "Sum of Digits os a given number :"<<sum;
    return 0;
}