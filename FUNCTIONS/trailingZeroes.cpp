#include<iostream>
using namespace std;
int trailing_Zeroes(int num)
{
    int count=0;
    while(num>=5)
    {
        count= count + (num/5); 
        num=num/5;
    }
    return count;
}
int main()
{
    
    int n;
    cin>>n;
    cout<<trailing_Zeroes(n);
}