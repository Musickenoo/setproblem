#include<iostream>

int main(){
    std::cout << 10/2 << "\n"; //5
    std::cout << 5.55555555555 << "\n"; //5.55556
    std::cout << 2/10 << "\n"; //0

    //float x = 5. 55555555555; //error: expected ',' or ';' before numeric constant
    //std::cout << x << "\n";

    std::cout << 2.0/10 << "\n"; // 0.2
    int x = 2;
    std::cout << x/10 << "\n"; //0
    std::cout << 2/10.0 << "\n"; //0.2
    std::cout << x/10.0 << "\n"; //0.2

    int y = 5;
    y = 69;
    std::cout << y << "\n"; // 69

    double z = 2;
    std::cout << z/10 << "\n"; // 0.2

    int a = 5, b = 7.5;
    std::cout << a << b << "\n"; //57

    double c = 5, d = 7.5;
    std::cout << c << d << "\n"; //57.5

    std::cout << "x\ny"; 
    //x
    //y
    std::cout << d/c; // 1.5
}