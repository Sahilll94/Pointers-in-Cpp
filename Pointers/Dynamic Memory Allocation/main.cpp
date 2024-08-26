#include<iostream>
using namespace std;

int main()
{
    // Create a int variable takes memory from STACK;
    int a = 10;
    cout<<"This 'a' takes memory from stack with value of: "<<a<<endl;

    // Create a int variable takes memory from HEAP;
    int * ptr = new int;
    * ptr = 10;

    cout<<"It takes memory from HEAP with value of: "<<*ptr<<endl;


    // Deallocate or free memory from heap
    delete ptr;
}