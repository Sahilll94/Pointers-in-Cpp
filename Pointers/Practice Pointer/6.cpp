#include<iostream>
using namespace std;


int main()
{
    int a = 7;
    int *c = &a;
    c=c+1;

    cout<<a<<endl;

    // Random value will be printed or Garbage value you can say; 
    cout<<*c<<endl;
}