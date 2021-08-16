#include <iostream>
using namespace std;

int func(int n)
{
    if(n>0)
    {
        cout<<n<<endl;

    int y= func(n-1) +n;
    cout<<"y = "<<y<<endl;
    return func(n-1);
    }
    return 0;
    
}

int main(int argc, char const *argv[])
{
    int x=3;
    func(x);
    //cout<<func(x)<<endl;
    return 0;
}
