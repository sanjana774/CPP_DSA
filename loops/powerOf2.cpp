#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>> num;
    while(num != 1)
    {
        if(num % 2 == 1)         
        {
            return 0; 
        }
        else        
        {
            num=num/2;
            return 1;
        }              
    }
}