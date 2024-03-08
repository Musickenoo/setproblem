#include <iostream>
using namespace std;
#include<cmath>

int binary(int x){
    int i = x;
    if(i == 1){
        return 2 ;
    }
    else{ 
        return pow(2,x)+binary(x-1) ;
    }
}

double saqar(int x){
    int i = x;
    if(i == 1){
        return sqrt(1) ;
    }
    else{ 
        return sqrt(x*saqar(x-1)) ;
    }
}

double divi(int x){
    int i = x;
    if(i == 0){
        return 1 ;
    }
    else{ 
        return 1+(x/divi(x-1)) ;
    }
}

int main(){
    int x;
    cin >> x;
    cout << binary(x)<< "\n";
    cout << saqar(x)<< "\n";
    cout << divi(x)<< "\n";
}