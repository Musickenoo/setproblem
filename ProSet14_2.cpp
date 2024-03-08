#include<iostream>
using namespace std;

void myfunc_re(int &x,int &y){
    int temp = x;
    x += y/2;
    y += temp/2;
}
void myfunc_po(int *x,int *y){
    int temp = *x;
    *x += *y/2;
    *y += temp/2;
}

int main() {
    int x = 10;
    int y = 20;
    int *a = &x;
    int *b = &y ;
    myfunc_re(x,y);
    cout << x << " " << y << "\n";
    myfunc_po(&x,&y);
    cout << *a << " " <<*b << "\n";
    return 0;
}