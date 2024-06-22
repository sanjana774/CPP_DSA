#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[7]={1,2,3,4,6,7};
    int sum=0,ans;
    int n;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        sum +=arr[i];
    }
    ans = n*(n+1)/2-sum;
    cout<<ans;

    return 0;
}
