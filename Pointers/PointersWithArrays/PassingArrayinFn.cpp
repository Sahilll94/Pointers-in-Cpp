#include<iostream>
using namespace std;


// YOU CAN ALSO PASS *arr pointer;
void solve1(int *arr, int size)
{
    cout << "Size of arr (pointer): " << sizeof(arr) << " bytes" << endl;
    // It will again print the same
    
}

void solve(int arr[], int size)
{
    cout << "Size of arr (pointer): " << sizeof(arr) << " bytes" << endl;

    // You will get a message on compiler saying parameter 'arr' will return size of 'int*' means the pointer;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    solve(arr, size);
}
