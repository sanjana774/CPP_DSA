#include<iostream>
using namespace std;
bool Prime(int num)
{
    if(num<2)
    {
        return 0;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;    
}
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
    int num;
    int fact_Number;
    cout<<"Enter the number:";
    cin>>num;
    cout<<Prime(num)<<endl;
    cout<<"Enter the number for factorial:";
    cin>>fact_Number;
    cout<<factorial(fact_Number);

}
