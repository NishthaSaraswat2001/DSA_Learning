// #include <iostream>
// using namespace std;

// struct Array{
//     int A[10];
//     int length;
//     int size;
// };
// // void display(struct Array arr)
// // {
 
// //  printf("elements are \n");
// //  for(int i=0; i<arr.length; i++)
// //  {
// //      cout<<arr.A[i]<<endl;
// //  }
 
// // }
// void Display(struct Array arr)
//  {
//  int i;
//  printf("\nElements are\n");
//  for(i=0;i<arr.length;i++)
//  printf("%d ",arr.A[i]);
//  }
// int linearSearch(struct Array arr, int key)
// {
//     for(int i=0; i<arr.length; i++)
//     {
//         if(key==arr.A[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     // struct Array arr;
//     // cout<<"Enter size f array";
//     // cin>>arr.size;
//     // arr.A= new int[arr.size];
//     // arr.length=0;
//     // cout<<"enter no of elements in array";
//     // cin>>arr.length;
//     // for(int i=0; i<arr.length; i++)
//     // {
//     //     cin>>arr.A[i];
//     // }

//     struct Array b={{2,3,9,16,18,21,28,32,35},10,9};
//     //cout<<<"linear search -->" << linearSearch(b, 4);
//     //printf("%d",linearSearch(b,4));
//     Display(b);
// }

#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
int LinearSearch(struct Array *arr,int key)
{
 int i;
 for(i=0;i<arr->length;i++)
 {
 if(key==arr->A[i])
 {
 swap(&arr->A[i],&arr->A[0]);
 return i;
 }
 }
 return -1;
}
int main()
{
 struct Array arr1={{2,23,14,5,6,9,8,12},10,8};
 printf("%d",LinearSearch(&arr1,14));
 Display(arr1);
 return 0;
}