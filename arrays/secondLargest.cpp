#include<iostream>
using namespace std;
int main()
{
    int i,ans= INT16_MIN;
    int arr[10];
    for(i=0;i<10;i++)
    cin>>arr[i];
    for(i=0;i<10;i++)
    {
        if(arr[i]>ans)
        {
            ans= arr[i];
        }
    }
    cout<<ans<<" is the largest number."<<"\n";
    /* code */
    int second = -1;
    for(i=0;i<10;i++)
    {
        if(arr[i]!=ans)
        {
            second=max(second,arr[i]);
        }
    }
    cout<<second<<" is the second largest.";
    return 0;
}
