#include <iostream>
using namespace std;

int f(int n)
{
    if(n>0)
    {
        return f(n-1) +n;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout<<f(10);
    return 0;
}
