#include<iostream> 
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;

}
int main()
{
    int fact_Number;
    cout<<"Enter the number:";
    cin>>fact_Number;
    cout<<factorial(fact_Number);

}