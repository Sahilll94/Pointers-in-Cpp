#include<iostream>
using namespace std;

void solve(int * arr, int size)
{

    // Now, A box will be created as a pointer 'arr' and it will store the base address of the array 'arr' for example 104;

    // *(arr+0); means *(104+0*4) = 104 as int takes 4 bytes;
    arr[0]=10;
    
    // *(arr+1); means *(104+1*4)= 108 and so on;
    arr[1]=9;

    arr[2]=8;

    arr[3]=7;

}

int main()
{
    int arr[]={1,2,3,4};

    int size = 4;


    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;

    solve(arr,size);

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;



}