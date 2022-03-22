#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
        cout<<"size"<<v.size()<<endl;
        for(int j=0; j<v.size(); j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
}

int main()
{
    //vector of pair
    // vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    // int n;
    // cout<<"enter size of vector"<<endl;
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     int x,y;
    //     cout<<"enyter elemet"<<endl;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // for(int i=0; i<n; i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    // for(auto value: v)
    // {
    //     cout<<value.first<<" "<<value.second<<endl;
    // }

    // array of vectors
    vector<int> v[3];
    for(int i=0; i<3; i++)
    {
        cout<<"enter size of each vector array";
        int n;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    cout<<"------------"<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     // for(int j=0; j<v[i].size(); j++)
    //     // {
    //     //     cout<<v[j];
    //     // }
    //     // cout<<endl;
    //     printVec(v[i]);
    // }

    for(int i=0; i<3; i++)
    {
        cout<<"size"<<v[i].size()<<endl;
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
       
    }
}