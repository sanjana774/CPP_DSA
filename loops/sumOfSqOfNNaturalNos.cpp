#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int i,num;
    cout << "Enter any number :";
    cin>> num;
    for(i=1;i<=num;i++)
    {
        sum=sum+i*i;
    }
    cout << "sum of square of n natural numbers is :"<<sum;
    return 0;
}