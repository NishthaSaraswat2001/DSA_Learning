#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int length;
    int size;
};

void display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 cout<<"\n";
 }

 void Swap(int *x, int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
 }

int MaxElement(struct Array *arr)
{
    int max=arr->A[0];
    for(int i=0; i<arr->length;i++)
    {
        if(arr->A[i]<=max)
        {
            i++;
        }
        else{
            max=arr->A[i];
        }
    }
    return max;
}
int MinElement(struct Array *arr)
{
    int min=arr->A[0];
    for(int i=0; i<arr->length;i++)
    {
        if(arr->A[i]>=min)
        {
            i++;
        }
        else{
            min=arr->A[i];
        }
    }
    return min;
}

 int main()
{
    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
    display(arr);
    //ReverseArray(&arr);
    cout<<MaxElement(&arr)<<endl;
    cout<<MinElement(&arr)<<endl;
    
}