#include<iostream>
using namespace std;

void funcOne(int n)
{
    n = 1;
}
void funcTwo(int *n)
{
    *n = 2;
}

int main() {
    char a,*b = &a;
    float c,*d = &c;
    double e,*f = &e;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    
    int n = 0,*x = NULL;
    int &y = n;
    x = &y;
    *x = 3;
    funcOne(n);
    cout << "n = " << n << endl;
    cout << "y = " << y << endl;
    funcTwo(&n);
    cout << "n = " << n << endl;
    cout << "y = " << y << endl;
    return 0;
}