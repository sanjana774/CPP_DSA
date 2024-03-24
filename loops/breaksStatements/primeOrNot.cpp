//write a program to check whether the entered number is prime or not//
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter any number :";
    cin>>n;
    for(i=2;i<=n/2;i++)
        {
        if(n%i==0)
            {
            cout<<n<<" is not prime";
            break;
            }  
        }
        cout<<n<<" is prime";
        return 0;
}