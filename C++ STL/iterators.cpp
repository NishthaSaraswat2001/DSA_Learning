#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{

    vector<int> v= {1,2,3,4};

    for(int i=0; i< v.size(); i++)
    {
        cout<< v[i]<< endl;
    }
    for loop on vector
    for(int value : v)
    {
        cout<< value<< endl;
    }

    
    iterator on vector
    for( vector<int > ::iterator it= v.begin(); it!= v.end(); it++)
    {
          cout<< *it << endl;
    }

    map< std:: string, int> m;
    m["nish"]= 5;
    m["yash"]= 2;

    //iterator on maps
    for( map< std:: string, int> ::iterator i =m.begin(); i!=m.end(); i++)
    {
        cout<< i->first << endl;
    }

    //ranged base for loops :: kv is a copy of 
    for(auto kv : m)
    {
        auto& key= kv.first;
        auto& value= kv.second;

        cout<<key<<" "<< value<<endl;
    }

    //structure binding
       for(auto [key, value] : m)
    {
        cout<<key<<" "<< value<<endl;
    }

}