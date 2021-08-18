#include <iostream>
using namespace std;
static int p;

double e(int x, int n)
{
    
    static double f=1;
    
    double var;

    if(n>0)
    {
       
        var= e(x, n-1);
        f= x/(p-n);
        return var*f + 1;
        
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int x=1;
    int n=10;
    p =n +1;
    cout<<e(x,n)<<endl;
    return 0;
}
