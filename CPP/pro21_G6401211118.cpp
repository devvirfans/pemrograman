#include<bits/stdc++.h>
using namespace std;
int main() {
    float arr[3];
    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;
    int len = sizeof(arr) / sizeof(arr[0]) - 1;
    while(len >= 0) {
        cout << &arr[len] << endl;
        len--;
    }
    ptr = arr;
    cout<<"\nDisplaying address using pointers: "<< endl;
    len = sizeof(arr) / sizeof(arr[0]) - 1;
    for(int i = len; i >= 0; i--)
        cout << ptr + i << endl;
    return 0;
}