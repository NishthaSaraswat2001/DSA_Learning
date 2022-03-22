#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4};
    vector<int > v1;
    // vector<int> v2(5,1);
    // cout<<"Capacity"<<v2.capacity()<<endl;
    //   cout<<v2.size()<<endl;
    // v2.push_back(7);
    // cout<<"Capacity"<<v2.capacity()<<endl;
    //   cout<<v2.size()<<endl;
    //  v2.push_back(8);
    //  cout<<"Capacity"<<v2.capacity()<<endl;
    //  v2.pop_back();
    //   cout<<v2.size()<<endl;
    // for(int i: v2)
    // {
    //     cout<<i<<endl;
    // }

    int n;
    cout<<"enter size";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cout<<"enter value";
        cin>>x;
        v1.push_back(x);
    } 
    for(int i: v1)
    {
        cout<<i<<endl;
    }
}