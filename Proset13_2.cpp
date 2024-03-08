#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

const int  b = 10;
double randomMatrix(double [][10], int, int);

int main(){
    int a ;
    cout << "Input Array:";
    cin >> a;
    srand(time(0));
    double c[a][b];
    randomMatrix(c, a, b);
    for(int i = 0; i < a; i++){
        cout << "row =" << i + 1 << ": ";
        for(int j = 0; j < b; j++)
            cout << c[i][j] << " ";
        cout << "\n";
    }
}

double randomMatrix(double c[][10], int a, int b){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++)
            c[i][j] = (rand() % 9000) / 1000.0;
    }
    return 0; // You can omit the return statement or return some value if needed
}
