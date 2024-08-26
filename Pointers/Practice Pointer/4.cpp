#include<iostream>
using namespace std;


int main()
{
    int b=10;
    int *a=&b;

    // write a line to print the memory address of variable b;
    cout<<a<<endl;
    cout<<&b<<endl;
}