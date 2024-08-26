#include<iostream>
using namespace std;


int main()
{
    int a=5;
    int b=a;

    int *ptr = &a;

    // prints the value of a which is 5;
    cout<<a<<endl;

    // prints the address of a which is 104;
    cout<<&a<<endl;

    // prints the address of 'a' which is 104;
    cout<<ptr<<endl;

    // prints the address of ptr which is 420;
    cout<<&ptr<<endl;
    
    // prints the value of 'a';
    cout<<*ptr<<endl;

    //  10. resume, 12. 
}