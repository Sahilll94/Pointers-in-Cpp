#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4};

    int *ptr=a;
    *ptr++;

    cout<<*ptr<<endl;


}