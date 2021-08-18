#include <iostream>
using namespace std;

// int e(int x, int n)
// {
   
//     if(n>0)
//     {
//         int val= val + sum(x,n);
//         return val;
//     }
//     return 1;
// }

double e(int x, int n)
{
    static double p =1,f=1;
    double var;

    if(n>0)
    {
       
        var= e(x, n-1);
        p=p*x;
        f=f*n;
        return var + p/f;
        
    }
    return 1;
}

// double e(int x, int n)
// {
//     static double p=1,f=1;
//     double r;

//     if(n==0)
//     return 1;

//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r + p/f;
// }

int main(int argc, char const *argv[])
{
    int x=1;
    int n=10;
    cout<<e(x,n)<<endl;
    return 0;
}
