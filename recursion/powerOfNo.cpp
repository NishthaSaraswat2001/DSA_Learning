#include <iostream>
using namespace std;

int pow(int a, int n)
{
    if(n>1)
    {
        return pow(a,n-1)*a;
    }
    return a;
}
static int i=0;
int pow1(int a, int n)
{
   
    if(n==0)
    return 1;
    i++;
    if(n%2==0)
    {
       
        return pow1(a*a, n/2);
    }
    else
    {
    
        return a*pow1(a*a, n/2);
    }

    if(n==3)
    cout<<i;
}

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

int main()
{
    int a, n;
    cout<<"Enter no. & power";
    cin>>a>>n;
    // cout<<"power of "<<a<<"is"<<pow(a,n);
    //  cout<<"power of "<<a<<"is"<<pow1(a,n);
    //  cout<<" "<<i;
    cout<<"power of "<<a<<"is"<<pow2(a,n);
}