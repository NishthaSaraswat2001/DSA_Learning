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
 }

 void Swap(int *x, int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
 }

void ReverseArray(struct Array *p)
{
    int i,j,temp;
    for(i=0,j=(p->length)-1;i<j;i++,j--)
    {
        // temp=p->A[i];
        // p->A[i]=p->A[j];
        // p->A[j]=temp;
        Swap(&p->A[i], &p->A[j]);
    }
}
void Reverse2(struct Array *arr)
{
    int *B;
    int i,j;
    B =new int[arr->length];
//     for(i=arr->length-1,j=0;i>=0;i--,j++)
//         B[j]=arr->A[i];
// for(i=0;i<arr->length;i++) 
//         arr->A[i]=B[i];
    for(i=0, j=(arr->length)-1; j>=0; i++,j--)
    {
        B[i]=arr->A[j];
    }
    for(i=0; i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}

int main()
{
    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
    display(arr);
    ReverseArray(&arr);
    display(arr);
}