#include<iostream>
using namespace std;
int main()
{
    int arr[5]={6,7,8,4,2};
    int ans = INT16_MIN;    
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans= arr[i];
        }
    }
    cout<<ans<<" is the maximum element of the array";
    return 0;
}