#include<bits/stdc++.h>
using namespace std;
int main() {
    float arr[3];
    // declare pointer variable
    float *ptr;
    int len = sizeof(arr) / sizeof(arr[0]) - 1;
    for(int i = 0; i < 3; i++){
        cin >> *(arr + i);
    }
    for(int i = 0; i < 3; i++){
        cout << *(arr + i) << endl;
    }
    cout << "Displaying address using arrays: " << endl;
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