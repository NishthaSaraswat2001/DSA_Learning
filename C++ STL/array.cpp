#include <iostream>
#include<array>
using namespace std;

int main(){
    int b[4] ={1,2,3,4};

    array <int,4> a= {1,2,3,4};

    int size= a.size();

    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"empty"<<a.empty()<<endl;
    cout<<"front"<<a.front()<<endl;
    cout<<"back"<<a.back()<<endl;
}