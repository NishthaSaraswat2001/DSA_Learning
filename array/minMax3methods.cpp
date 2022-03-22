#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

// struct Pair getMinMax(int *a, int n)
// {
//     struct Pair minMax;
//     if(n==1)
//     {
//         minMax.max=a[0];
//         minMax.min=a[0];
//     }
//     if(a[0]>a[1])
//     {
//         minMax.max=a[0];
//         minMax.min=a[1];
        
//     }
//     else{
//         minMax.max=a[1];
//         minMax.min=a[0];
//     }

//     for(int i=0; i<n; i++)
//     {
//         if(a[i]>minMax.max)
//         {
//             minMax.max=a[i];

//         }
//         else if(a[i]<minMax.min){
//             minMax.min=a[i];
//         }
//     }
//     return minMax;
// }

// int main()
// {
//     int arr[ ]={2,4,1,5,7,0,7,8,9};
//     struct Pair minMax= getMinMax(&arr,9);
//     cout<<"Max value is:-"<<minMax.max<<endl;
//     cout<<"Min value is:-"<<minMax.min<<endl;
// }

//REcursive method



// struct Pair MinMax(int a[], int low, int high)
// {
//     struct Pair minMax, mml, mmu;
    
//     int mid;
   
//     if(low==high)
//     {
//         minMax.min=a[low];
//         minMax.max=a[low];
//         return minMax ;
//     }
//     if(high==low +1)
//     {
//         if(a[low]>a[high])
//     {
//         minMax.max=a[low];
//         minMax.min=a[high];
        
//     }
//     else{
//         minMax.max=a[high];
//         minMax.min=a[low];
//     }
//     return minMax;
//     }
//     mid=(low+high)/2;
//     mml=MinMax(a, low, mid);
//     mmu=MinMax(a, mid+1, high);
//     if(mml.max>mmu.max)
//     {
//         minMax.max=mml.max;
//     }
//     else{
//         minMax.max=mmu.max;
//     }

//      if(mml.min<mmu.min)
//     {
//         minMax.min=mml.min;
//     }
//     else{
//         minMax.min=mmu.min;
//     }
//     return minMax;

// }
//Pair making

struct Pair MinMax(int a[], int n)
{
    struct Pair minMax; 
    int i;
    if(n%2==0)
    {
    if(a[0]>a[1])
    {
        minMax.max=a[0];
        minMax.min=a[1];
        
    }
    else{
        minMax.max=a[1];
        minMax.min=a[0];
    }
    i=2;
    }
    else{
         minMax.max=a[0];
        minMax.min=a[0];
        i=1;
    }

    while(i<n-1)
    {
        if (a[i] > a[i + 1])        
        {
            if(a[i] > minMax.max)    
                minMax.max = a[i];
                 
            if(a[i + 1] < minMax.min)        
                minMax.min = a[i + 1];    
        }
        else       
        {
            if (a[i + 1] > minMax.max)    
                minMax.max = a[i + 1];
                 
            if (a[i] < minMax.min)        
                minMax.min = a[i];    
        }
         
        
        i += 2;
        
    }
    return minMax;
}

int main()
{
    int arr[ ]={6,4,1,5,7,0,7,8,9};
    cout<<"inside main"<<endl;
    //struct Pair minMax= MinMax( arr, 0, 8);
    struct Pair minMax= MinMax( arr, 9);
    cout<<"Max value is:- "<<minMax.max<<endl;
    cout<<"Min value is:- "<<minMax.min<<endl;
}