#include<iostream>
using namespace std;

int findDivisor(int x){
    int i = x,ans1 = 0;
    while(0<i){
        if(x % i == 0 && i != 1) ans1 = i ;
        i-- ;
    }
    return ans1 ;
}

int greatDivisor(int y){
    int j = y-1,ans2 = 0;
    while(0<j){
        if(y % j == 0 ){
            ans2 = j ;
            break;
        }
        j-- ;
    }
    return ans2 ;
}

int main(){
    cout << findDivisor(10) << endl;
    cout << findDivisor(97)<< endl;
    cout << findDivisor(221)<< endl;
    cout << greatDivisor(2)<< endl;
    cout << greatDivisor(12)<< endl;
    cout << greatDivisor(91)<< endl;
    cout << greatDivisor(49)<< endl;
    cout << greatDivisor(81)<< endl;
    cout << greatDivisor(55)<< endl;
}
