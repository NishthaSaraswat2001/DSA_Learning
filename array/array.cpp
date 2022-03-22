#include <iostream>
using namespace std;

int main()
{
    int a[5]={1,2,4,5,7};
    int *p;
    p= new int[4];
    // p[0]=1;

    // for(int i=0; i<4; i++)
    // {
    //     p[i]=i+1;
    // }

    // for(int i=0; i<4; i++)
    // {
    //     cout<<"p is "<<endl;
    //     cout<<p[i]<<endl;
    // }
    int b[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *p1[3];
    p1[0]=new int[4];
    p1[1]=new int[4];
    p1[2]=new int[4];

    int **q;
    q= new int *[3];
    q[0]=new int[4];
    q[1]=new int[4];
    q[2]=new int[4];

    for(int i=0; i<3;i++)
    {
        for(int j=0; j<4;j++)
        {
            // printf("a is-->\n");
            // cout<<b[i][j]<<endl;
              printf("b is-->\n");
              p1[i][j] = i +j;
            cout<< p1[i][j]<<endl;
            //  printf("c is-->\n");
            // cout<< q[i][j]<<endl;

        }
    }
}