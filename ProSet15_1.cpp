#include<iostream> 
using namespace std; 
int sumNonZero(int *,int **,int **); 
int main(){ 
    int A[] = {0,0,0,0,0,1,3,2,1,1,0,0,0,1,6,9,0,0,0,1,1,0,0}; 
    int sum;  
    int *start, *end;  
    sum =  sumNonZero(A,&start,&end); 
    cout << "sum = " << sum << "\n"; 
    cout << "start = " << start << "\n" ; 
    cout << "end = " << end << "\n"; 
    cout << "length = " << end-start+1 << "\n"; 
    cout <<"--------------------------------------\n"; 
    sum =  sumNonZero(end+1,&start,&end); 
    cout << "sum = " << sum << "\n"; 
    cout << "start = " << start << "\n" ; 
    cout << "end = " << end << "\n"; 
    cout << "length = " << end-start+1 << "\n"; 
    cout <<"--------------------------------------\n"; 
    sum =  sumNonZero(end+1,&start,&end); 
    cout << "sum = " << sum << "\n"; 
    cout << "start = " << start << "\n" ; 
    cout << "end = " << end << "\n"; 
    cout << "length = " << end-start+1 << "\n"; 
    cout <<"--------------------------------------\n"; 
} 
int sumNonZero(int *d, int **s, int **e) {
    int sum = 0;

    for (int i = 0; d[i] != 0; ++i) {
        if (*s == nullptr) {
            *s = &d[i];
        }
        *e = &d[i];
        sum += d[i];
    }

    return sum;
}