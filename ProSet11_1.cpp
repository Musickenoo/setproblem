#include <iostream>
using namespace std;
template <typename T>
T shifting(T,int);

int main()
{
 cout << shifting(5,5.5) << "\n";
 cout << shifting(6.9f,2)<< "\n";
}

template <typename T>
T shifting (T x,int y){
 return x+y;
}
