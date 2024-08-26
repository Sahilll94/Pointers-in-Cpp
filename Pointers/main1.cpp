#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int b=20;


    int * ptr1 = &a;

    int * ptr2 = &b;


    cout<<"1 : "<<a<<endl;

    cout<<"2 : "<<&a<<endl;

    cout<<"3 : "<<b<<endl;

    cout<<"4 : "<<&b<<endl;

    cout<<"5 : "<<ptr1<<endl;

    cout<<"6 : "<<ptr2<<endl;

    cout<<"7 : "<<&ptr1<<endl;

    cout<<"8 : "<<&ptr2<<endl;

    cout<<"9 : "<<*ptr1<<endl;

    cout<<"10 : "<<*ptr2<<endl;

    // changed the value of 'a' via pointer; 
    *ptr1 = 200;

    cout<<a<<endl;

    cout<<sizeof(ptr1)<<endl;

    

    // TO CHECK THE SIZE OF  A POINTER
    char o = 'b';

    char * ptr3 = &o;

    cout<<sizeof(ptr1)<<endl;


    cout<<sizeof(int)<<endl;

    cout<<sizeof(char)<<endl;


    int *ptr;

    cout<<*ptr<<endl;


}