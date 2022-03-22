#include <iostream>
using namespace std;

int BinarySearch(int A[10],int low,int high, int key)
{
    int mid;
    while(low<high)
    {
        mid=(low + high)/2;
        if(A[mid]==key)
        {
            return mid;
        }
        else if(A[mid]<key)
        {
            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
    }
 return -1;

}

int main()
{
    int arr [10]={1,2,3,4,5,6,7,8,9,10};
    int l, h, key;
    l=0;
    h=9;
    cout<<"enter element";
    cin>>key;
    cout<<BinarySearch(arr,l,h,key);

}