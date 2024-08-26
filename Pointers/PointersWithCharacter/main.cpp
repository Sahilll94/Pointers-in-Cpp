#include<iostream>
using namespace std;

int main()
{
    char ch[100] = "Sahil";

    char * cptr = ch;


    cout<<"ch: "<<ch<<endl; //Sahil

    cout<<"&ch: "<<&ch<<endl; //104

    cout<<"ch[0]: "<<ch[0]<<endl; //S

    cout<<"&cptr: "<<&cptr<<endl; //208

    cout<<"*cptr: "<<*cptr<<endl; //S

    cout<<"*(cptr+3): "<<*(cptr+3)<<endl; //i

    cout<<"cptr: "<<cptr<<endl; //Sahil

    cout<<"cptr+1: "<<cptr+1<<endl;







}