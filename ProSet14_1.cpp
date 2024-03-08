#include<iostream>
using namespace std;

int main() {
    int a = 69;
    int *b = &a;
    int **c = &b;
    cout << &a << "\n"; //address a
    //cout << *a; //error
    cout << b << "\n"; // address a
    cout << &b << "\n"; // address pointer b
    cout << &c << "\n"; // address pointer c
    cout << *c << "\n"; // address a
    cout << **c << "\n"; // 69
    cout << c << "\n"; //address b
    return 0;
}
