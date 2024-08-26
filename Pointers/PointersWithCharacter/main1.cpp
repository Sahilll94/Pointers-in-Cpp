#include<iostream>
using namespace std;


int main()
{
    char ch[10]="RaceCar";

    char *ptr = &ch[0];


    cout<<"ch : "<<ch<<endl;
    cout<<"&ch : "<<&ch<<endl;
    cout<<"*(ch+3) : "<<*(ch+3)<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    cout<<"*(ptr+3) : "<<*(ptr+3)<<endl;
    cout<<"ptr+2 : "<<ptr+2<<endl;
    cout<<"ptr+4 : "<<ptr+4<<endl;

    return 0;
} 