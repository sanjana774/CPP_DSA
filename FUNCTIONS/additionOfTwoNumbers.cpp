// WRITE A PROGRAM TO PRINT THE SUM OF TWO NUMBERS USING THE FUNCTION.//
#include<iostream>
using namespace std;
int add(int num1,int num2)//parameters
{
    int sum = num1 + num2;
    return sum; 
}
int main()
{
    int a;
    cin >>a;
    int b;
    cin >> b;
    int sum=add(a,b);
    cout << "the sum of two numbers :"<<add(a,b) <<endl;
    // variables used at the time of calling called arguments.
}



