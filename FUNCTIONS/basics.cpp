#include<iostream> 
using namespace std;
bool PrimeNumber(int num) // function declaration
{              // fuction definition
    if(num <2)
    {
        return 0;
    }
    for(int i = 2; i < num ; i ++)
        {
            if(num%i==0)
            {
                return 0;
            }
    }
    return 1;
}
int main()
{
    int number;
    cin>>number;
    cout<<PrimeNumber(number);      //function calling
}