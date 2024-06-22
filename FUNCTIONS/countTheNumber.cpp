/*
 Write a function to count the number 
of digits in a number and then print the square of this number. 
*/
#include<iostream>
using namespace std;
int count(int num)
{
    int digits=0;
    while(num!=0)
    {
       num = num/10;
        digits++;   
    }
    cout << digits<<'\n';
    return digits; 
} 
void printsquare(int num)
{
    num*num;
    cout << "square :"<<num*num<<endl;
}
int main()
{
    int a;
    cin >> a;
    count (a);
    printsquare(a);
}