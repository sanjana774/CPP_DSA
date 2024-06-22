//first and last occurrence of the element//
#include<iostream>
using namespace std;
int first_Occurrence(int size,int arr[],int target)
{
    int first = -1;
    int start = 0, end = size-1,mid;
    while(start<=end)
    {
        mid = start + end - start/2;
        if(arr[mid]==target)
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]< target)
        start = mid + 1;
        else
        end = mid - 1;
    }
    return first;
}
int last_Occurrence(int size,int arr[],int target)
{
    int last = -1;
    int start = 0, end = size-1,mid;
    while(start<=end)
    {
        mid = start + end - start/2;
        if(arr[mid]==target)
        {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]< target)
        start = mid + 1;
        else
        end = mid - 1;
    }
    return last;
}
int main()
{
    int size;
    int arr[11];
    int target;
    cout <<" Enter the size of the array :";
    cin>> size;
    cout<<"Enter the elements of the array:";
    for(int i = 0; i< size; i ++)
    cin>>arr[i];
    cout << "Enter the target:";
    cin>>target;
    cout <<"First Occurrence at the index:"<< first_Occurrence(size,arr,target)<<"\n";
    cout <<"Last Occurrence at the index:"<< last_Occurrence(size,arr,target);
    return 0;
}