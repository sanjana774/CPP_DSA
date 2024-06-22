#include<iostream>
using namespace std;
int main()
{
    int x,rem,rev=0;
    int num=x;
    cin>>x;
    while(num!=0)
    {
        rem=num%10;
        num/=10;
        rev=(rev*10)+rem;
    }
    if(x==rev)
    {
        cout<<"palindrome";
    }
    else
    {
       cout<<"not a palindrome";
    }
    return 0;
}