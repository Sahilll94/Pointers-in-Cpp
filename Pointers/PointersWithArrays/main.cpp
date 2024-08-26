#include<iostream>
using namespace std;


int main()
{
    int arr[]={10,20,30,40};

    // Both will print the same answer;
    cout<<arr<<endl;
    cout<<&arr<<endl;


    int *ptr = arr; 

    cout<<ptr<<endl;
}