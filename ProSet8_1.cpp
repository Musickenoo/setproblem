#include<iostream>
#include<string>
using namespace std;

void printPattern1(int x,int y){
    if( x > 0 && y >0 ){
        for(int i=0;i < x;i++){
            if(i %2 == 0){
                for(int k=0;k < y;k++){
                    if(k % 2 ==0){
                        cout << "O";
                    }
                    else cout << "X";
                    
                }
                cout << "\n" ;
            }
            if(i %2 != 0){
                for(int j=0;j < y;j++){
                    if(j % 2 ==0){
                        cout << "X";
                    }
                    else cout << "O";
                }
                cout << "\n" ;
            }
        }
    }
    else cout << "Invalid input";
}
int main()
{   
    printPattern1(2,2);
    printPattern1(3,5);
    printPattern1(5,3);
    printPattern1(0,3);
    printPattern1(7,-1);
    return 0;
} 