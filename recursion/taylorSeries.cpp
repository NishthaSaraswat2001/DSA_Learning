#include <iostream>
using namespace std;

int pow2(int a, int n)
{
    if(n==0)
    return 1;
    int ans = pow2(a, n/2);
    if(n%2==0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
}

int factorial(int n)
{
    if(n>1)
    {
        return factorial(n-1)*n;
    }
    return 1;
}

int taylorSeries(int x, int n)
{
    static float sum =0;
    if(n>0)
    {
        float pow=0, fact=0, div;
        pow = pow2(x,n);
        //cout<<"pow"<<pow<<endl;
        fact= factorial(n);
         //cout<<"fact"<<fact<<endl;2 
         div = pow/fact;
        sum = taylorSeries(x,n-1) + div;
        return sum;
    }
    return 1;
}

double func(int x, int n)
{
    double p=1, f=1;
    double r;
    if (n>0)
    {
        r=func(x,n-1);
        p=p*x;
        f=f*n;
        return r + p/f;
    }
    return 1;
}

int main()
{
 int x, n;
 cout<<"Enter no. & n value";
 cin>>x>>n;
 cout<<"Taylor series ans os :- "<<taylorSeries(2,4);
}
