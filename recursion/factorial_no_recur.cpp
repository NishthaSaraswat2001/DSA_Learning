#include <iostream>
using namespace std;

int fact(int n)
{
    if(n>1)
    {
        return fact(n-1)*n;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    cout<<fact(6);
    return 0;
}