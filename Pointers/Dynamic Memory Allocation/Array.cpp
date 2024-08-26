#include<iostream>
using namespace std;

int main()
{
    // Create an array using memory from stack;
    int arr[]={1,2,3,4,5,6};

    cout<<"Array from Stack Memory: ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // Create an array using memory from heap;
    int * ptr = new int [6];

    // *(ptr+0*4);
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    ptr[5]=6;

    cout<<"Array from heap Memory: ";
    for(int i=0;i<6;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    // 2D array from Stack memory;

    int arrr [2][3] = {
        {1,2,3},
        {4,5,6}
    };


    cout<<"2D array using stack memory: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arrr[i][j]<<" ";
        }
    }


    //2D array using Heap memory;
    // LEFT TO BE COMPLETED
    


}