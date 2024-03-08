#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x= 10,sum1 = 0;
    while (x <= 50)
    {
        sum1 = sum1 + pow(x,2);
        x++;
    }
    cout << sum1 << endl ;

    int y= 3,sum2 = 0;
    while (y <= 300)
    {
        sum2 = sum2 + pow(y,2);
        y +=3;
    }
    cout << sum2 << endl ;

    int z=1,sum3 = 0;
    while (z <= 999)
    {
        sum3 = sum3 + z/z+1;
        z +=2;
    }
    cout << sum3 << endl ;

}