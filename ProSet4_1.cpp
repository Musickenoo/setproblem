#include<iostream>
using namespace std;
int main(){
    int x[7] = {4,-1,-2,2,5};
    int i = 0;
    while(i < 6){
        if(x[i+1] > 0){
            cout << x[i];   
    }
       i++;
    }
    return 0;
}