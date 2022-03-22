#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    //p=make_pair(2,"nish");
    // p={2,"hello"};
    // pair<int, string> &p1=p;
    // p1.first=3;
    // cout<<p.first<<" "<<p.second<<endl;
  
    // cout<<p1.first<<" "<<p1.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    //declaring pair array method1
    pair<int, int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    //declaring pair array method2
    pair<int, int> p1_array[3]={{1,2}, {2,3}, {3,4}};

    for(int i=0; i<3; i++)
    {
        cout<<p1_array[i].first<<" "<<p1_array[i].second<<endl;
    }



}