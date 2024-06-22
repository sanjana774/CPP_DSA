#include<iostream>
using namespace std;
int pow();
int Count_Digits(int num)
{
    int count = 0;
    while(num!=0)
    {
        count ++;
        num=num/10;
    }
    return count;
}
int armstrong(int num,int Count_digits)
{
    int n=num;
    int rem, ans = 0;
    int pow;
    while(num!=0)
    {
        rem=n%10;
        n/=10;
        ans = ans+ pow(rem,Count_Digits);
    }
}
int main()
{

}