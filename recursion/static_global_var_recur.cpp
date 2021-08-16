#include <iostream>
using namespace std;

int func(int n){
if(n>0)
{
    cout<<n<<endl;
    
    int y= func(n-1) + n;
    cout<<y<<endl;
    return y;
    //cout<<"decending";
}

    return 0;

}

int func1(int n)
{
    static int x;
    if(n>0)
    {
        x++;
        return func1(n-1) + x;

    }
    return 0;
}


int main(int argc, char const *argv[])
{
    int x=5;
    cout<<"Value is "<<func1(x)<<endl;
    /* code */
    return 0;
}
