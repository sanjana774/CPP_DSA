#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num<2)
    {
        cout <<"not prime";
        return 0;
    }
    else
    {
       for (int i=2;i<num;i++)
       {
        if(num%i==0)
        {
            cout << "Not Prime";
            return 0;
        }
       }
       cout <<"Prime";
    }
}    
