#include<iostream>
using namespace std;
char conversion(char alphabet)
{
    char ans = alphabet-'a'+'A';
    return ans;
}
int main()
{
    char alpha;
    cin>>alpha;
    cout <<"the required output iss :"<< conversion(alpha);
    return 0;
}