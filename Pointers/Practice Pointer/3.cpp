#include<iostream>
using namespace std;


int main()
{
    int * ptr =0;
    int a=10;
    
    // Here, * ptr will cause error in runtime as *ptr points at 0 means null address (0*000000);
    *ptr=a;

    cout<<*ptr<<endl;
}