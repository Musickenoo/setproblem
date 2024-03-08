#include<iostream>
#include<string>
using namespace std;

int main()
{   string s ;
    cout << "inter a :";
    cin >> s ;
    int i = 0,L1 = 0, L2 = 0 ,L = s.size();
    while (i < L)
    {
        if(s[i] == 'X'){
            L1 +=1;
        }
        else if(s[i] == 'Y'){
            L2 +=1;
        }
        i++;
    }
    
    if( L1 > L2){
       cout << "1" ;
    }
    if( L1 < L2){
       cout << "-1" ;
    }
    if( L1 == L2){
        cout << "0" ;
    }
    return 0;
} 