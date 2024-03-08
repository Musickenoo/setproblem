#include<iostream>
#include<cmath>
using namespace std;
int cheetah(int money){
    int bottle = money/10;
    int ticket = bottle;
    int new_bottle;
    while (ticket >= 3){
        new_bottle = ticket/3;
        ticket = ticket%3+new_bottle;
        bottle += new_bottle;
    }
    return bottle;
}

int main(){
    cout << cheetah(20) << endl;
    cout << cheetah(35) << endl;
    cout << cheetah(101)<< endl;
    cout << cheetah(150)<< endl;
    cout << cheetah(204)<< endl;
}