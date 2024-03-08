#include<iostream>
using namespace std;
template <typename T>
void selectionSort(T [],int);
template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}
int main(){
    
    int a[10] = {12,25,30,44,2,0,4,7,55,25};
    char b[8] = {'z','b','C','V','d','D','G','B'};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
    for(int j = 0; j < 8; j++) cout << b[j] << " ";
	cout << "\n\n";	
	selectionSort(a,10);
    selectionSort(b,8);
}
template <typename T>
void selectionSort(T d[],int N){
    for(int i = 1 ; i < N; i++){
            for(int j = 0; j < i; j++){
                if(d[i] < d[j]){
                    swap(d,i,j);
                }
            }
            cout << "Pass " << i << ":";
            for (int k = 0; k < N ; k++) cout << d[k] << " ";
            cout << "\n";
    }
}