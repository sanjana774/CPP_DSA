/* 
Q2: Given two numbers a and b, write a 
function to print all odd numbers between them.
*/   
#include<iostream>
using namespace std;
int odd(int num1,int num2)
{
    for(int i= num1;i<=num2;i++)
    {
        if(i%2!=0) 
        {
            cout << i ;   
        }
    }  
}
int main()
{
    int a,b;
    cin >> a >>b;
    odd(a,b);   
}  