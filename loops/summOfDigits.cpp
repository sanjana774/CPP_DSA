#include<iostream>
using namespace std;
int main()
{
    int num,rem,add=0;
    cout<<"Enter desired number:";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        num/=10;
        add=add+rem;
    }
    cout<<"sum of digits is :"<<add;
    return 0;
}
