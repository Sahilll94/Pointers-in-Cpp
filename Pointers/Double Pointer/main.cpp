#include<iostream>
using namespace std;


int main()
{
    int a = 10;

    // stores address of 'a' variable;
    int * ptr = &a;


    // TO STORE ADDRESS OF 'PTR' POINTER THEN;
    int **qptr = &ptr;

    cout<<&ptr<<endl;
    // This will print the address of *ptr;


    // here, I printed the value of ptr which is stored in qptr;
    cout<<qptr<<endl;

    cout<<&a<<endl;

    // by derefencing it will print address of 'a' as it stores the value inside the ptr pointer;
    cout<<*qptr<<endl;

}