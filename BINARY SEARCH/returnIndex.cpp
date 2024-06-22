#include<iostream>
using namespace std;
int Search_insert(int size,int arr[],int target)
{
    int start = 0;
    int end = size-1;
    int mid;
    int index = size;
    while (start<=end)
    {
        mid = start + (end - start)/2; 
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        start = mid + 1;
        else
        {
            index = mid;
            end = mid -1;
        }
    }
}
    int main()
    {
        int size , target;
        int arr[6];
        cin>>size;
        for(int i = 0 ; i < size ; i++)
        cin>>arr[i];
        cin>>target;
        cout<<Search_insert(size,arr,target);
        return 0;
    }
