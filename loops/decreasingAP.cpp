//Display this AP - 100,97,94,..upto all terms which are positive. N //
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=100;i>n;i=i-3)
    cout<<i<<endl;
    return 0;
}